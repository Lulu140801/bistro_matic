/*
** EPITECH PROJECT, 2020
** infin_mod
** File description:
** infin_mod
*/

#include "../../include/my.h"
#include "../../include/bistro.h"

static long long mod_val(char *c)
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

static long long mod_cal(long long value_a, long long value_b)
{
    long long temp = 0;
    long long temp2 = 0;
    long long result = 0;

    temp = value_a / value_b;
    temp2 = temp * value_b;
    result = value_a - temp2;

    return (result);
}

char *infin_mod(char *a, char *b)
{
    if (b[0] == '0') {
        write(2, "Stop: modulo by zero\n", 23);
        return (84);
    }
    long long value_a = mod_val(a);
    long long value_b = mod_val(b);
    long long result_int = mod_cal(value_a, value_b);
    char *result = my_int_to_str(result_int);

    return (result);
}