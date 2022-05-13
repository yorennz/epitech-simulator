/*
** EPITECH PROJECT, 2022
** game_tools
** File description:
** game tools
*/

#include <stdlib.h>

#include "csfml.h"
#include "game.h"

static void check_key(config_t *config, window_t *window, player_t *player)
{
    return;
}

void game_events(config_t *config, window_t *window, game_t *game)
{
    player_t *player = game->player;

    player->move(config, player, game->time);
    while (sfRenderWindow_pollEvent(window->sf_window, &window->event)) {
        window->events(window);
        if (window->event.type == sfEvtKeyPressed)
            check_key(config, window, player);
    }
    return;
}
