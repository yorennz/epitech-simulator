/*
** EPITECH PROJECT, 2022
** my_char_isalpha
** File description:
** return 1 if char is alpha and 0 if not
*/

int my_char_isalpha(char const c)
{
    if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
        return 0;
    return 1;
}
