/*
** EPITECH PROJECT, 2022
** my_arraylen
** File description:
** return size of an array
*/

#include <stdlib.h>

int my_darraylen(char **darray)
{
    int len = 0;

    while (darray[len] != NULL)
        ++len;
    return len;
}
