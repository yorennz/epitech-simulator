/*
** EPITECH PROJECT, 2022
** main
** File description:
** main function that check error handling and load the game
*/

#include "macros.h"

int error_handling(void);

int klb(void);

int main(void)
{
    if (error_handling() == ERROR)
        return ERROR;
    return klb();
}
