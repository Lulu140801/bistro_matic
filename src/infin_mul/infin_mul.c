/*
** EPITECH PROJECT, 2020
** infin_mult
** File description:
** infin_mult
*/

#include "../../include/my.h"
#include "../../include/bistro.h"

static long long mult_val(char *c)
{
    long long value_c = 0;

    for (long long i = 0; c[i] != '\0'; i++) {
        value_c += c[i];
        value_c = value_c - 48;
        if (c[i + 1] != '\0')
            value_c = value_c * 10;
    }
    return (value_c);
}

static long long mult_cal(long long value_a, long long value_b)
{
    long long result = 0;

    for (; value_b != 0; value_b--)
        result += value_a;
    return (result);
}

char *infin_mul(char *a, char *b)
{
    long long value_a = mult_val(a);
    long long value_b = mult_val(b);
    long long result_int = mult_cal(value_a, value_b);
    char *result = my_int_to_str(result_int);

    return (result);
}