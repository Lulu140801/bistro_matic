/*
** EPITECH PROJECT, 2020
** mod.c
** File description:
** mod a number
*/

#include "lib/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int mod(char *str1, char *str2)
{
    int nb1 = my_getnbr(str1);
    int nb2 = my_getnbr(str2);
    int Result = 0;

    Result = nb1 % nb2;
    return (Result);
}

int strmod(char *str, char *str1, char *str2)
{
    str1 = malloc(sizeof(char) * my_strlen(str));
    str2 = malloc(sizeof(char) * my_strlen(str));

    str = my_strcpy_1(str);
    for (int ok = 0, nbone = 0, nb = 0, index = 0; str[index] != '\0';) {
        if (str[index] == '%') {
            index++;
            ok++;
        }
        if (ok == 0) {
            str1[nb] = str[index];
            nb++;
        } else if (ok == 1) {
            str2[nbone] = str[index];
            nbone++;
        }
        index++;
    }
    return (mod(str1, str2));
}