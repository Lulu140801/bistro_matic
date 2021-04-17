/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** my_strncpy
*/

#include "./../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    for (; a != n; a++)
        dest[a] = src[a];
    dest[a] = '\0';
    return (dest);
}