/*
** EPITECH PROJECT, 2021
** disp_oct
** File description:
** returns octal of decimal nbr
*/

#include <stdlib.h>

char *my_revstr(char *str);

void my_putstr(char const *str);

void disp_oct(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int p = 0;

    for (; nb != 0; p++) {
        res[p] = (nb % 8) + '0';
        nb /= 8;
    }
    res[p + 1] = '\0';
    my_putstr(my_revstr(res));
}
