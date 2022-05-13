/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** convert a string into array depending on space, \n or \t
*/

#include <stdlib.h>

static void check_char(char const c1, char const c2, int *count)
{
    if (c1 == c2)
        count[0]++;
    return;
}

static int count_words(char const *str, char const c)
{
    int count = 0;

    for (int i = 0, word = 0; str[i] != '\0'; ++i) {
        if (word == 1)
            check_char(str[i], c, &count);
        if (word == 0 && str[i] != c) {
            ++count;
            word = 1;
        }
    }
    return count;
}

static char **malloc_array(char const *str, int len)
{
    char **array = malloc(sizeof(char*) * (len + 1));

    for (int i = 0; i <= len; ++i)
        array[i] = NULL;
    return array;
}

static char *get_word(char const *str, char const c, int *pos)
{
    char *word;
    int len = 0;

    for (int i = pos[0]; str[i] != '\0' && str[i] != c; ++i)
        ++len;
    word = malloc(sizeof(char) * (len + 1));
    word[len] = '\0';
    for (int j = 0; j < len; ++j) {
        word[j] = str[pos[0]];
        ++pos[0];
    }
    return word;
}

char **my_str_to_word_array_simple(char const *str, char const c)
{
    int len = count_words(str, c);
    char **array = malloc_array(str, len);

    for (int i = 0, j = 0; i < len && str[j] != '\0';) {
        if (str[j] == c)
            ++j;
        else {
            array[i] = get_word(str, c, &j);
            ++i;
        }
    }
    return array;
}
