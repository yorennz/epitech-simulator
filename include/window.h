/*
** EPITECH PROJECT, 2022
** window
** File description:
** all functions and structures about window
*/

#include "csfml.h"

typedef struct window_s {
    sfVideoMode sf_mode;
    sfRenderWindow *sf_window;
    sfEvent event;
    void (*destroy)(struct window_s *window);
    void (*display)(struct window_s *window);
    void (*clear)(struct window_s *windpw);
    void (*events)(struct window_s *window);
} window_t;
