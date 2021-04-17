/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** my_putstr
*/

#include "./../../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; my_putchar(str[i]), i++);
    return (0);
}