/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Write your my.h header file that contains the prototypes of
** all the functions exposed by your libmy.a
*/

#pragma once

void my_putchar(char const c);
int my_isneg(int nb);
void my_putnbr(int nb);
void my_putdec(unsigned int nb);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
int my_nbrlen(int nb);
int my_strlen(char const *str);
char *my_getstr(int nb);
int my_getnbr(char const *str);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *str);
char *my_revstr(char *str);
int my_strcmp(char const *str1, char const *str2);
int my_strncmp(char const *str1, char const *str2, int n);
int my_char_isalpha(char const c);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str, int mode);
char *my_strcat(char const *str1, char const *str2);
char *my_strncat(char *dest, char const *src, int nb);
void my_printf(char *str, ...);
char **my_str_to_word_array(char const *str, char const *delims);
int my_darraylen(char **darray);
void my_putdarray(char **darray, char const c);
void my_free_darray(char **darray);
int my_char_isprintable(char const c);
int my_str_isprintable(char const *str);
char **my_darraydup(char **darray);
int my_filelen(char const *path);
char *my_readfile(char const *path);
int my_find_char(char const *str, char const target);
int my_find_str(char const *str, char const *target);
int my_char_occ(char const *str, char const c);
char *my_strfix(char const *str);
