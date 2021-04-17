/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** my_atoi
*/

#include "./../../include/my.h"

int my_atoi(char *str)
{
    int result = 0;

    for (int lg = my_strlen(str), i = 0; i < lg && lg < 9; ++i) {
        if (str[i] >= '0' && str[i] <= '9') {
            result += str[i] - '0';
            result *= 10;
        }
    }
    return (result /= 10);
}