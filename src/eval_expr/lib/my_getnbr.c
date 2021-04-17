/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** ...
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        nb = nb + str[i] - 48;
        nb = nb * 10;
        i++;
    }
    nb = nb / 10;
    return (nb);
}