/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

#include "./../../include/my.h"

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;
    char temp;

    for (; str[a] != '\0'; a++);
    for (; b < a; b++) {
        a--;
        temp = str[b];
        str[b] = str[a];
        str[a] = temp;
    }
    return (str);
}