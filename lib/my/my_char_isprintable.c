/*
** EPITECH PROJECT, 2022
** my_char_isprintable
** File description:
** return 1 if char is printable and 0 if not
*/

int my_char_isprintable(char const c)
{
    if (!(c >= ' ' && c <= '~'))
        return 0;
    return 1;
}
