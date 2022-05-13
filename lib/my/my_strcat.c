/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** write a function that concatenates two strings
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char const *str1 , char const *str2)
{
    int str1_len = my_strlen(str1);
    int str2_len = my_strlen(str2);
    int len = str1_len + str2_len;
    char *dest = malloc(sizeof(char) * (len + 1));

    if (dest == NULL)
        return NULL;
    dest[len] = '\0';
    for (int i = 0, j = 0, turn = 1; i < len; ++i, ++j) {
        if (i == str1_len) {
            turn = 2;
            j = 0;
        }
        if (turn == 1)
            dest[i] = str1[j];
        if (turn == 2)
            dest[i] = str2[j];
    }
    return dest;
}
