/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** copy a string with another
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src, int debut, int fin)
{
    int i = debut;
    int nb = 0;

    while (src[i] != '\0' && nb != fin) {
        dest[nb] = src[i];
        i++;
        nb++;
    }
    dest[nb] = '\0';
    return (dest);
}
