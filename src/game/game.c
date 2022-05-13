/*
** EPITECH PROJECT, 2022
** game
** File description:
** game
*/

#include <stdlib.h>

#include "game.h"

player_t *init_player(config_t *config);

static void destroy(game_t *game)
{
    player_t *player = game->player;

    sfClock_destroy(game->time);
    player->destroy(player);
    free(game);
    return;
}

static void update(config_t *config, window_t *window, game_t *game)
{
    game_events(config, window, game);
    game_display(window, game);
    return;
}

game_t *init_game(config_t *config)
{
    game_t *game = malloc(sizeof(game_t));

    if (game == NULL)
        return NULL;
    game->destroy = destroy;
    game->update = update;
    game->time = sfClock_create();
    game->player = init_player(config);
    return game;
}
