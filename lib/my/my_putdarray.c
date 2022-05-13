/*
** EPITECH PROJECT, 2022
** my_putarray
** File description:
** print an array
*/

#include <stdlib.h>

int my_putchar(char const c);

int my_putstr(char const *str);

void my_putdarray(char **darray, char const c)
{
    for (int i = 0; darray[i] != NULL; ++i) {
        my_putstr(darray[i]);
        my_putchar(c);
    }
    return;
}
