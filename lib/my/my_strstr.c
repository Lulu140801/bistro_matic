/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** my_strstr
*/

#include "./../../include/my.h"

char *my_strstr(char *str, char const *to_find)
{
    int length_to_find = my_strlen(to_find);
    int length_str = my_strlen(str);
    int i = 0;
    int j = 0;

    for (; (i <= (length_str - length_to_find)); j = 0, i++) {
        for (; ((j < length_to_find) && (to_find[j] == str[j+i])); j++);
        if (j == length_to_find && length_to_find != 0)
            return (&str[i]);
    }
    return (0);
}