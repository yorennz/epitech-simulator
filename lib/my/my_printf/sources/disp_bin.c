/*
** EPITECH PROJECT, 2021
** disp_bin
** File description:
** returns binary of a decimal nbr
*/

#include <stdlib.h>

char *my_revstr(char *str);

void my_putstr(char const *str);

void disp_bin(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int p = 0;

    while (nb != 0) {
        if (nb % 2 == 0)
            res[p] = '0';
        else if (nb % 2 == 1)
            res[p] = '1';
        nb /= 2;
        ++p;
    }
    res[p + 1] = '\0';
    my_putstr(my_revstr(res));
}
