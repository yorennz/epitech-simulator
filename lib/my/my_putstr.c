/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** displays, one-by-one, the characters of a string
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return;
}
