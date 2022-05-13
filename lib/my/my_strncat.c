/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** write a function that concatenates two strings
*/

int my_strlen(char const *str);

char *my_strncat(char *dest , char const *src, int nb)
{
    int i = my_strlen(dest);

    if (nb <= my_strlen(src)) {
        for (int j = 0; nb <= my_strlen(src) && j != nb; ++j) {
            dest[i] = src[j];
            ++i;
        }
        dest[my_strlen(dest) + 1] = '\0';
    }
    return dest;
}
