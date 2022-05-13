/*
** EPITECH PROJECT, 2022
** config
** File description:
** config
*/

#include "csfml.h"

typedef struct res_s {
    int width;
    int height;
} res_t;

typedef struct keys_s {
    int move[2][2];
} keys_t;

typedef struct config_s {
    int state;
    unsigned int fps;
    res_t res;
    keys_t keys;
    void (*destroy)(struct config_s *config);
} config_t;
