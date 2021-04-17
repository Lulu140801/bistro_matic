/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** my_strcapitalize
*/

#include "./../../include/my.h"

char *capitalize(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

char *lowercase(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c += 32;
}

char *my_strcapitalize(char *str)
{
    capitalize(&str[0]);
    for (int a = 1; str[a] != '\0'; a++) {
        lowercase(&str[a]);
        if (str[a - 1] >= ' ' && str[a - 1] <= '/' ||
        str[a - 1] >= ':' &&  str[a - 1] <= '@' ||
        str[a - 1] >= '[' &&  str[a - 1] <= '`' ||
        str[a - 1] >= '{' &&  str[a - 1] <= '~')
            capitalize(&str[a]);
    }
    return (str);
}