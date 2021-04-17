/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** my_str_isnum
*/

#include "./../../include/my.h"

int my_str_isnum(char const *str, int i)
{
    for (; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    if (str[0] == '\0')
        return (0);
    else
        return (1);
}