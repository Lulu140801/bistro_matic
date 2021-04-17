/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** calculator of the charactere int the string
*/

#include "my.h"

int my_strlen_2(char const *str)
{
    int a = 0;
    int nb = 0;

    while (str[a] != '\0') {
        if (str[a] == '+' || str[a] == '*' || str[a] == '/' || str[a] == '-')
            nb++;
        a++;
    }
    return (nb);
}