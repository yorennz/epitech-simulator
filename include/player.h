/*
** EPITECH PROJECT, 2022
** player
** File description:
** player
*/

#include "csfml.h"
#include "config.h"
#include "window.h"

typedef struct stats_s {
    int health;
    int shield;
    int speed;
    int acceleration;
    int deceleration;
    int damage;
} stats_t;

typedef struct moves_s {
    int state[2];
    float dir[2];
    float last_time[2];
    float delta_time[2];
    float cur_velocity[2];
    float default_velocity;
    float max_velocity;
    float acceleration;
    float deceleration;
} moves_t;

typedef struct player_s {
    sfIntRect rect;
    sfTexture *texture;
    sfSprite *sprite;
    sfCircleShape *hitbox;
    sfVector2f pos;
    stats_t stats;
    moves_t moves;
    void (*destroy)(struct player_s *player);
    void (*move)(config_t *config, struct player_s *player, sfClock *time);
    void (*display)(window_t *window, struct player_s *player);
} player_t;
