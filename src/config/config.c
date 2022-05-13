/*
** EPITECH PROJECT, 2022
** config
** File description:
** config
*/

#include <stdlib.h>

#include "macros.h"
#include "csfml.h"
#include "config.h"

static void destroy(config_t *config)
{
    free(config);
    return;
}

config_t *init_config(void)
{
    config_t *config = malloc(sizeof(config_t));

    if (config == NULL)
        return NULL;
    config->destroy = destroy;
    config->state = 1;
    config->fps = 60;
    config->res.width = 1280;
    config->res.height = 720;
    config->keys.move[X][0] = sfKeyQ;
    config->keys.move[X][1] = sfKeyD;
    config->keys.move[Y][0] = sfKeyZ;
    config->keys.move[Y][1] = sfKeyS;
    return config;
}
