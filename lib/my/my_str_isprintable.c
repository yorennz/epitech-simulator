/*
** EPITECH PROJECT, 2022
** my_str_isprintable.c
** File description:
** return 0 if string isnt printable and 1 if it is
*/

int my_char_isprintable(char const c);

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; ++i)
        if (my_char_isprintable(str[i]) == 0)
            return 0;
    return 1;
}
