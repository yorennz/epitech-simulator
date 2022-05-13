/*
** EPITECH PROJECT, 2022
** my_strfix.c
** File description:
** fix \flags ('\n', '\t'...) in a returned string
*/

#include <stdlib.h>

int my_find_char(char const *str, char const target);

static int strlen_fix(char const *str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; ++i, ++len)
        if (str[i] == '\\' && my_find_char("abtnvfr", str[i + 1]) >= 0)
            ++i;
    return len;
}

char *my_strfix(char const *str)
{
    int len = strlen_fix(str);;
    char *str_fixed;
    char fixes[] = {'\a', '\b', '\t', '\n', '\v', '\f', '\r'};
    char c;

    str_fixed = malloc(sizeof(char) * (len + 1));
    if (str_fixed == NULL)
        return NULL;
    str_fixed[len] = '\0';
    for (int j = 0, k = 0; str[k] != '\0'; ++j, ++k) {
        if (str[k] == '\\' &&
            ((c = my_find_char("abtnvfr", str[k + 1])) >= 0)) {
            str_fixed[j] = fixes[c];
            ++k;
        } else
            str_fixed[j] = str[k];
    }
    return str_fixed;
}
