/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** my_strcpy
*/

#include "./../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    dest[my_strlen(src)] = '\0';
    for (int i = 0; src[i] != '\0'; dest[i] = src[i], i++);
    return (dest);
}