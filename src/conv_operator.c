/*
** EPITECH PROJECT, 2020
** conv_operator
** File description:
** conv_operator
*/

#include "../include/my.h"
#include "../include/bistromatic.h"
#include "../include/bistro.h"

static char conv_operator_check(char *str, char *ops, char *ops_true, int i)
{
    for (int j = 0; ops[j] != '\0'; j++)
        if (str[i] == ops[j])
            str[i] = ops_true[j];
    return (str[i]);
}

char *conv_operator(char *str, char *ops)
{
    char ops_true[7] = "()+-*/%";
    int i = 0;

    for (; str[i] != '\0'; conv_operator_check(str, ops, ops_true, i), i++);
    return (str);
}