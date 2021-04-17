/*
** EPITECH PROJECT, 2020
** my_intlen
** File description:
** my_intlen
*/

#include "./../../include/my.h"

int my_intlen(int nb)
{
    int result = 0;

    for (float float_int = nb; float_int >= 1; result++, float_int /= 10);
    return (result);
}