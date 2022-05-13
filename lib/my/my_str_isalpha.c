/*
** EPITECH PROJECT, 2022
** my_str_isalpha
** File description:
** return 1 if the string is alpha and 0 if not
*/

int my_strlen(char const *str);

int my_char_isalpha(char const c);

int my_str_isalpha(char const *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len; ++i)
        if (my_char_isalpha(str[i]) == 0)
            return 0;
    return 1;
}
