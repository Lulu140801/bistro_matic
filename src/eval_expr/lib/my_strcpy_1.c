/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string with another
*/

#include "my.h"
#include <stdlib.h>

char *my_strcpy_1(char const *src)
{
    int i = 0;
    int nb = 0;
    char *str;
    str = malloc(sizeof(char) * my_strlen(src) + 1);

    while (src[i] != '\0') {
        if (src[i] != '(' && src[i] != ')') {
            str[nb] = src[i];
            nb++;
        }
        i++;
    }
    str[nb] = '\0';
    return (str);
}



