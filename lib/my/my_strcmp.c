/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** compare two strings
*/

int my_strlen(char const *str);

int my_strcmp(char const *str1, char const *str2)
{
    int i = 0;
    int len_str1 = my_strlen(str1);
    int len_str2 = my_strlen(str2);

    if (len_str1 != len_str2)
        return 0;
    while (i != len_str1) {
        if (str1[i] != str2[i])
            return 0;
        ++i;
    }
    return 1;
}
