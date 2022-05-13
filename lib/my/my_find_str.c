/*
** EPITECH PROJECT, 2022
** my_find_str
** File description:
** return -1 or index of a string in another string
*/

int my_find_str(char const *str, char const *target)
{
    int i = 0;
    int j = 0;

    for (int cur_i = 0; target[j] != '\0' && str[cur_i] != '\0'; ++cur_i) {
        if (str[cur_i] == target[j])
            ++j;
        else {
            j = 0;
            i = cur_i + 1;
        }
    }
    if (target[j] == '\0')
        return i;
    return -1;
}
