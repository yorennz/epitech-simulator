/*
** EPITECH PROJECT, 2021
** disp_positive_int
** File description:
** returns int with + in front of
*/

void my_putchar(char const c);

void my_putnbr(int nb);

void disp_plus_format(int nb, int *i)
{
    if (nb >= 0) {
        my_putchar('+');
        my_putnbr(nb);
    } else
        my_putnbr(nb);
    ++i[0];
}
