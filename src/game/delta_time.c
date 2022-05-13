/*
** EPITECH PROJECT, 2022
** get_delta_time
** File description:
** get delta time
*/

#include "csfml.h"

void reset_time(float *last_time, sfClock *time_clock)
{
    last_time[0] = sfClock_getElapsedTime(time_clock).microseconds /
        1000000.0;
    return;
}

float get_delta_time(float last_time, sfClock *time_clock)
{
    return sfClock_getElapsedTime(time_clock).microseconds /
        1000000.0 - last_time;
}
