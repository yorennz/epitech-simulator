/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** counts and returns the nbr of char found in the string passed as parameter
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
        ++i;
    return i;
}
