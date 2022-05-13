/*
** EPITECH PROJECT, 2022
** my_char_occ
** File description:
** return occurence of a character in a string
*/

int my_char_occ(char const *str, char const c)
{
    int occ = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == c)
            ++occ;
    return occ;
}
