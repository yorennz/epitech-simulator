/*
** EPITECH PROJECT, 2022
** player
** File description:
** player
*/

#include "macros.h"
#include "player.h"

void reset_time(float *last_time, sfClock *time_clock);

void analyse_movements(float cur_dir[2], moves_t *moves, sfClock *time, int i)
{
    if (cur_dir[i] != 0) {
        if (moves->state[i] == 0 || moves->state[i] == 2 ||
            (moves->state[i] == 1 && moves->dir[i] != cur_dir[i]))
            reset_time(&moves->last_time[i], time);
        if ((moves->state[i] == 1 || moves->state[i] == 2)
            && moves->dir[i] != cur_dir[i])
            moves->cur_velocity[i]  *= -0.5;
        moves->state[i] = 1;
        moves->dir[i] = cur_dir[i];
    } else {
        if (moves->state[i] == 0)
            moves->dir[i] = cur_dir[i];
        else if (moves->state[i] == 1) {
            moves->state[i] = 2;
            reset_time(&moves->last_time[i], time);
        }
    }
    return;
}

void update_movements(moves_t *moves, int i)
{
    if (moves->state[i] == 1) {
        moves->delta_time[i] *= moves->acceleration;
        if (moves->cur_velocity[i] + moves->delta_time[i]
            <= moves->max_velocity)
            moves->cur_velocity[i] += moves->delta_time[i];
        else
            moves->cur_velocity[i] = moves->max_velocity;
    } else if (moves->state[i] == 2) {
        moves->delta_time[i] *= moves->deceleration;
        if (moves->cur_velocity[i] - moves->delta_time[i]
            > moves->default_velocity)
            moves->cur_velocity[i] -= moves->delta_time[i];
        else {
            moves->cur_velocity[i] = moves->default_velocity;
            moves->state[i] = 0;
        }
    }
    return;
}

moves_t init_moves(stats_t stats)
{
    moves_t moves;

    moves.state[X] = 0;
    moves.state[Y] = 0;
    moves.default_velocity = 0.1;
    moves.last_time[X] = 0;
    moves.last_time[Y] = 0;
    moves.cur_velocity[X] = moves.default_velocity;
    moves.cur_velocity[Y] = moves.default_velocity;
    moves.max_velocity = moves.default_velocity * (stats.speed * 10);
    moves.acceleration = stats.acceleration * 5;
    moves.deceleration = stats.deceleration * 2;
    return moves;
}
