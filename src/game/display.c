/*
** EPITECH PROJECT, 2022
** game_tools
** File description:
** game tools
*/

#include <stdlib.h>

#include "csfml.h"
#include "game.h"

void game_display(window_t *window, game_t *game)
{
    player_t *player = game->player;

    player->display(window, player);
    return;
}
