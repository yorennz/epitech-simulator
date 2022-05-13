/*
** EPITECH PROJECT, 2022
** window
** File description:
** window
*/

#include <stdlib.h>

#include "macros.h"
#include "config.h"
#include "window.h"

static void destroy(window_t *window)
{
    if (sfRenderWindow_isOpen(window->sf_window))
        sfRenderWindow_close(window->sf_window);
    if (window->sf_window != NULL)
        sfRenderWindow_destroy(window->sf_window);
    free(window);
    return;
}

static void display(window_t *window)
{
    sfRenderWindow_display(window->sf_window);
    return;
}

static void clear(window_t *window)
{
    sfRenderWindow_clear(window->sf_window, sfBlack);
    return;
}

static void events(window_t *window)
{
    if (window->event.type == sfEvtClosed)
        sfRenderWindow_close(window->sf_window);
    return;
}

window_t *init_window(config_t *config)
{
    window_t *window = malloc(sizeof(window_t));
    sfVideoMode sf_mode = {config->res.width, config->res.height, 32};

    window->destroy = destroy;
    window->display = display;
    window->clear = clear;
    window->events = events;
    window->sf_window = sfRenderWindow_create(sf_mode, "ke la bagarre",
                                              sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window->sf_window, config->fps);
    if (window->sf_window == NULL) {
        window->destroy(window);
        return NULL;
    }
    return window;
}
