/*
** EPITECH PROJECT, 2022
** my_find_char
** File description:
** return -1 or index of a char in a string
*/

int my_find_char(char const *str, char const target)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == target)
            return i;
    return -1;
}
