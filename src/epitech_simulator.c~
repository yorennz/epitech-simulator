/*
** EPITECH PROJECT, 2022
** klb
** File description:
** klb functions that call everything about the game, menu etc
*/

#include <stdlib.h>

#include "macros.h"
#include "csfml.h"
#include "klb.h"

config_t *init_config(void);
window_t *init_window(config_t *config);
game_t *init_game(config_t *config);

static void klb_destroy(klb_t *klb)
{
    config_t *config = klb->config;
    window_t *window = klb->window;
    game_t *game = klb->game;

    if (config != NULL)
        config->destroy(config);
    if (window != NULL)
        window->destroy(window);
    if (game != NULL)
        game->destroy(game);
    free(klb);
}

static klb_t *init_klb(void)
{
    klb_t *klb = malloc(sizeof(klb_t));

    if (klb == NULL)
        return NULL;
    klb->destroy = klb_destroy;
    klb->config = init_config();
    if (klb->config == NULL) {
        klb->destroy(klb);
        return NULL;
    }
    klb->window = init_window(klb->config);
    klb->game = init_game(klb->config);
    if (klb->window == NULL || klb->game == NULL) {
        klb->destroy(klb);
        return NULL;
    }
    return klb;
}

int klb(void)
{
    klb_t *klb = init_klb();
    config_t *config;
    window_t *window;
    game_t *game;

    if (klb == NULL)
        return ERROR;
    config = klb->config;
    window = klb->window;
    game = klb->game;
    while (sfRenderWindow_isOpen(window->sf_window)) {
        window->clear(window);
        if (config->state == 1)
            game->update(config, window, game);
        window->display(window);
    }
    klb->destroy(klb);
    return 0;
}
