/*
** EPITECH PROJECT, 2020
** my_int_to_str
** File description:
** my_int_to_str
*/

#include "./../../include/my.h"

char *my_int_to_str(int nb)
{
    int div = 1;
    int len = my_intlen(nb);
    char *result = malloc(sizeof(char) * (len + 2));

    if (nb < 0) {
        nb *= -1;
        result[len] = '-';
    } if (nb == 0)
        return ("0");
    for (int i = 0; i < len; div *= 10, i++)
        result[i] = (((nb / div) % 10) + 48);
    my_revstr(result);
    return (result);
}