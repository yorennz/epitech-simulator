/*
** EPITECH PROJECT, 2022
** my_free_array
** File description:
** freeing an array
*/

#include <stdlib.h>

int my_darraylen(char **darray);

void my_free_darray(char **darray)
{
    int darray_len = my_darraylen(darray);

    for (int i = 0; i < darray_len; ++i)
        free(darray[i]);
    free(darray);
    return;
}
