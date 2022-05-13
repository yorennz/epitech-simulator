/*
** EPITECH PROJECT, 2022
** klb
** File description:
** klb
*/

#pragma once

#include "game.h"

typedef struct klb_s {
    config_t *config;
    window_t *window;
    game_t *game;
    void (*destroy)(struct klb_s *klb);
} klb_t;
