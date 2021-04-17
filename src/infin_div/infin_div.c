/*
** EPITECH PROJECT, 2020
** infin_div
** File description:
** infin_div
*/

#include "../../include/my.h"
#include "../../include/bistro.h"

static long long div_val(char *c)
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

static long long div_cal(long long value_a, long long value_b)
{
    long long result = value_a / value_b;
    return (result);
}

char *infin_div(char *a, char *b)
{
    if (b[0] == '0') {
        write(2, "Stop: division by zero\n", 23);
        return (84);
    }
    long long value_a = div_val(a);
    long long value_b = div_val(b);
    long long result_int = div_cal(value_a, value_b);
    char *result = my_int_to_str(result_int);

    return (result);
}

int main(int argc, char **argv)
{
    printf("%s", infin_div(argv[1], argv[2]));
}