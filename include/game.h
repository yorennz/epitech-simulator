/*
** EPITECH PROJECT, 2022
** game
** File description:
** all functions and structures about game
*/

#include "player.h"

typedef struct game_s {
    sfClock *time;
    player_t *player;
    void (*destroy)(struct game_s *game);
    void (*update)(config_t *config, window_t *window, struct game_s *game);
} game_t;

void game_events(config_t *config, window_t *window, game_t *game);
void game_display(window_t *window, game_t *game);
