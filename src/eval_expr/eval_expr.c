/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** which represents a mathematical expression
*/

#include "lib/my.h"
#include <stdlib.h>
#include <string.h>

int chose(char *str_1)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int nb = 0;
    int result = 0;
    char operator[5] = "*/+-";
    int (*send[5])() = {strmult, strdiv, stradd, strsubb};

    while (operator != '\0') {
        while (str_1[result] != '\0') {
            if (operator[nb] == str_1[result]) {
                result = send[nb](str_1, str1, str2);
                return (result);
            }
            result++;
        }
        result = 0;
        nb++;
    }
}

char *bracket(char const *str)
{
    int a = 0;
    int debut = 0;
    int fin = 0;
    char *str_1 = NULL;

    while (str[a] != '\0') {
        if (str[a] == '(')
            debut = a;
        if (str[a] == ')')
            fin = a;
        a++;
    }
    if (fin == 0 && debut == 0)
        return (str);
    fin = fin - debut;
    str_1 = malloc(sizeof(char) * (fin + 3));
    str_1 = my_strcpy(str_1, str, debut, fin + 1);
    return (str_1);
}

int eval_expr_2(char const *str)
{
    char *str_1 = NULL;
    char *str_2 = NULL;
    int nb = 0;
    int result = 0;

    nb = my_strlen_2(str);
    result = my_strlen(str) * my_strlen(str);
    str_2 = malloc(sizeof(char) * result);
    str_2 = my_strcpy_2(str_2, str);
    while (nb != 0) {
        str_1 = malloc(sizeof(char) * my_strlen(str_2));
        str_1 = my_strcpy_2(str_1, str_2);
        str_1 = bracket(str_2);
        str_1 = decoupe(str_1);
        result = chose(str_1);
        str_2 = regroup(str_2, str_1, result);
        nb--;
    }
    return (result);
}

int eval_expr(char *av1, char *av2, char *expr, int nb)
{
    my_put_nbr(eval_expr_2(expr));
    return (0);
}