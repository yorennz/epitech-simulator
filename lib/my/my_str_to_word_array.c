/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** convert a string into double array depending on passed delimiter
*/

#include <stdlib.h>

char *my_strfix(char const *str);
void my_free_darray(char **darray);

typedef struct word_array_s {
    char *delims;
    int len;
    int start_index;
} word_array_t;

static int is_word(char const c, char const *delims)
{
    for (int i = 0; delims[i] != '\0'; ++i)
        if (c == delims[i])
            return 0;
    return 1;
}

static void next_word(char const *str, char const *delims, int *i)
{
    while (is_word(str[i[0]], delims) == 1 && str[i[0]] != '\0')
        ++i[0];
    while (is_word(str[i[0]], delims) == 0 && str[i[0]] != '\0')
        ++i[0];
    return;
}

static word_array_t *set_word_array_struct(char const *str, char const *delims)
{
    word_array_t *word_array_struct = malloc(sizeof(word_array_t));
    int i = 0;

    word_array_struct->delims = my_strfix(delims);
    if (word_array_struct->delims == NULL) {
        free(word_array_struct);
        return NULL;
    }
    word_array_struct->len = 0;
    while (str[i] != '\0') {
        if (is_word(str[i], word_array_struct->delims) == 1)
            ++word_array_struct->len;
        next_word(str, word_array_struct->delims, &i);
    }
    if (word_array_struct->len == 0) {
        free(word_array_struct->delims);
        free(word_array_struct);
        return NULL;
    }
    return word_array_struct;
}

static char *set_word(char const *str, char const *delims, int *i, int *j)
{
    char *word = NULL;
    int len = 0;

    for (int j = i[0]; str[j] != '\0'; ++j) {
        if (is_word(str[j], delims) == 0)
            break;
        ++len;
    }
    word = malloc(sizeof(char) * (len + 1));
    if (word == NULL)
        return NULL;
    word[len] = '\0';
    for (int k = 0; k < len; ++k, ++i[0])
        word[k] = str[i[0]];
    ++j[0];
    return word;
}

char **my_str_to_word_array(char const *str, char const *delims)
{
    word_array_t *word_array_struct = set_word_array_struct(str, delims);
    char **word_array = NULL;

    if (word_array_struct == NULL)
        return NULL;
    word_array = malloc(sizeof(char *) * (word_array_struct->len + 1));
    if (word_array == NULL) {
        free(word_array_struct->delims);
        free(word_array_struct);
        return NULL;
    }
    word_array[word_array_struct->len] = NULL;
    for (int i = 0, j = 0; j < word_array_struct->len && str[i] != '\0';) {
        if (is_word(str[i], word_array_struct->delims) == 1)
            word_array[j] = set_word(str, word_array_struct->delims, &i, &j);
        next_word(str, delims, &i);
    }
    free(word_array_struct->delims);
    free(word_array_struct);
    return word_array;
}
