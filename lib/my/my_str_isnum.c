/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** return 1 if string is a number and 0 if not
*/

int my_strlen(char const *str);

int my_str_isnum(char const *str, int mode)
{
    int i = 0;
    int size = my_strlen(str);

    if (mode == -1 && str[0] != '-')
        return 0;
    if (mode == -1 || (mode == 0 && str[0] == '-'))
        i = 1;
    if (mode == 1 && !(str[0] >= '0' && str[0] <= '9'))
        return 0;
    while (i < size) {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return 0;
        ++i;
    }
    return 1;
}
