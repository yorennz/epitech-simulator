/*
** EPITECH PROJECT, 2022
** stats
** File description:
** stats
*/

#include "player.h"

stats_t init_stats(config_t *config)
{
    stats_t stats;

    stats.health = 100;
    stats.shield = 0;
    stats.speed = 10;
    stats.acceleration = 10;
    stats.deceleration = 5;
    stats.damage = 10;
    return stats;
}
