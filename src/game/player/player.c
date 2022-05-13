/*
** EPITECH PROJECT, 2022
** player
** File description:
** player
*/

#include <stdlib.h>

#include "macros.h"
#include "player.h"

stats_t init_stats(config_t *config);
moves_t init_moves(stats_t stats);

float get_delta_time(float last_time, sfClock *time);

void analyse_movements(float cur_dir[2], moves_t *moves, sfClock *time, int i);
void update_movements(moves_t *moves, int i);

static void destroy(player_t *player)
{
    moves_t *moves = &player->moves;

    sfSprite_destroy(player->sprite);
    sfTexture_destroy(player->texture);
    free(player);
    return;
}

static void display(window_t *window, player_t *player)
{
    sfRenderWindow_drawSprite(window->sf_window, player->sprite, NULL);
    return;
}

static void move(config_t *config, player_t *player, sfClock *time)
{
    moves_t *moves = &player->moves;
    float cur_dir[2] = {0, 0};

    for (int i = 0, rectify = -1; i < 2; ++i, rectify += 2) {
        if (sfKeyboard_isKeyPressed(config->keys.move[X][i]))
            cur_dir[X] += rectify;
        if (sfKeyboard_isKeyPressed(config->keys.move[Y][i]))
            cur_dir[Y] += rectify;
    }
    for (int i = 0; i < 2; ++i)
        analyse_movements(cur_dir, moves, time ,i);
    moves->delta_time[X] = get_delta_time(moves->last_time[X], time);
    moves->delta_time[Y] = get_delta_time(moves->last_time[Y], time);
    for (int i = 0; i < 2; ++i)
        update_movements(moves, i);
    for (int i = 0; i < 2; ++i)
        if (moves->state[i] == 1 || moves->state[i] == 2) {
            sfSprite_move(player->sprite, (sfVector2f)
                                  {moves->dir[X] * moves->cur_velocity[X],
                                   moves->dir[Y] * moves->cur_velocity[Y]});
            break;
        }
    return;
}

player_t *init_player(config_t *config)
{
    player_t *player = malloc(sizeof(player_t));

    if (player == NULL)
        return NULL;
    player->destroy = destroy;
    player->move = move;
    player->display = display;
    player->stats = init_stats(config);
    player->moves = init_moves(player->stats);
    player->rect = (sfIntRect) {0, 0, 16, 25};
    player->texture = sfTexture_createFromFile("assets/player.png", NULL);
    player->sprite = sfSprite_create();
    sfSprite_setTexture(player->sprite, player->texture, sfFalse);
    sfSprite_setTextureRect(player->sprite, player->rect);
    sfSprite_setScale(player->sprite, (sfVector2f) {4, 4});
    return player;
}
