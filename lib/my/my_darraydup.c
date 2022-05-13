/*
** EPITECH PROJECT, 2022
** my_arraydup
** File description:
** return a allocated copy of array given as parameter
*/

#include <stdlib.h>

int my_darraylen(char **darray);

char *my_strdup(char const *str);

char **my_darraydup(char **darray)
{
    char **dest;
    int len = my_darraylen(darray);

    dest = malloc(sizeof(char*) * (len + 1));
    dest[len] = NULL;
    for (int i = 0; i < len; ++i)
        dest[i] = my_strdup(darray[i]);
    return dest;
}
