/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** return stirng given as parameter reversed
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char temp;

    for (int i = 0, j = my_strlen(str) - 1; i < j; ++i, --j) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    return str;
}
