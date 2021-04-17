/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

#include "./../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0, diff = 0; s1[i] && s2[i] && i < n; i++) {
        diff = s1[i] - s2[i];
        if (diff != 0)
            return (diff);
    }
    return (0);
}