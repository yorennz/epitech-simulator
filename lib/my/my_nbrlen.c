/*
** EPITECH PROJECT, 2021
** my_nbrlen
** File description:
** count how much digits in nbr
*/

int my_nbrlen(int nb)
{
    int len = 1;

    if (nb < 0)
        ++len;
    while (nb / 10 != 0) {
        nb /= 10;
        ++len;
    }
    return len;
}
