/*
** EPITECH PROJECT, 2021
** disp_hex
** File description:
** display hexadecimal value of a decimal number
*/

int my_putnbr(int nb);

void my_putchar(char const c);

static char *define_let(char mod)
{
    if (mod == 'x')
        return ("abcdef");
    else
        return ("ABCDEF");
}

static void disp_letter(char *let, int nb, int pow, int pos)
{
    for (int i = nb / pow; i > 10; --i)
        ++pos;
    my_putchar(let[pos]);
}

void disp_hex(int nb, char mod)
{
    char *let = define_let(mod);
    int pos = 0;

    for (int quot, pow = 16; nb >= 16; pow = 16, pos = 0) {
        for (; pow * 16 < nb; pow *= 16);
        if (nb / pow < 10)
            my_putnbr(nb / pow);
        else
            disp_letter(let, nb, pow, pos);
        nb -= nb / pow * pow;
    }
    if (nb < 10)
        my_putnbr(nb);
    else {
        for (pos = 0; nb > 10; --nb)
            ++pos;
        my_putchar(let[pos]);
    }
}
