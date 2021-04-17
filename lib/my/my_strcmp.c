/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/

#include "./../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int diff = 0;
    int a = 0;

    for (; s1[a] && s2[a]; a += 1) {
        diff = s1[a] - s2[a];
        if (diff != 0)
            return (diff);
    } if ((!s1[a] && s2[a]) || (s1[a] && !s2[a]))
        diff = s1[a] - s2[a];
    return (diff);
}