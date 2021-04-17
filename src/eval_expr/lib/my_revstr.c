/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** ...
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int r = 0;
    char swap;

    while (str[i] != '\0'){
        i++;
    }
    while (i > r){
        swap = str[i];
        str[i] = str[r];
        str[r] = swap;
        r++;
        i--;
    }
    return (str);
}