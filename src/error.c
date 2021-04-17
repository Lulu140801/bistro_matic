/*
** EPITECH PROJECT, 2020
** Bistro
** File description:
** error
*/

#include "../include/my.h"
#include "../include/bistromatic.h"
#include "../include/bistro.h"

static int check_string(char c, char *base)
{
    int rst = 0;
    int i = 0;

    for (; base[i] != '\0' && rst == 0; rst = (c == base[i]) ? 1 : rst, i++);
    if (rst == 0)
        return (84);
    return (0);
}

static int check_num_bracket(char *expr, char *ops, int nb)
{
    char bkt_op = ops[0];
    char bkt_cl = ops[1];
    int nb_bkt_op = 0;
    int nb_bkt_cl = 0;

    for (int i = 0; expr[i] != '\0' && i < nb; i++) {
        nb_bkt_op = (expr[i] == bkt_op) ? nb_bkt_op += 1 : nb_bkt_op;
        nb_bkt_cl = (expr[i] == bkt_cl) ? nb_bkt_cl += 1 : nb_bkt_cl;
    }
    if (nb_bkt_op != nb_bkt_cl)
        return (84);
    return (0);
}

static int check_base(char *base)
{
    for (int i = 1, j = 0; base[i] != '\0'; i++) {
        if (base[j] == base[i])
            return (84);
        if (base[i + 1] == '\0') {
                j++;
                i = j;
        }
    }
    return (0);
}

static int check_base_and_ops(char *base, char *ops)
{
    for (int i = 0, j = 0; base[j] != '\0'; i++) {
        if (base[j] == '\0') {
            j++;
            i = 0;
        } if (ops[i] == '\0') {
            j++;
            i = 0;
        } if (base[j] == ops[i])
            return (84);
    }
    return (0);
}

int error(char *expr, char *base, char *ops, int nb)
{
    if (check_base(base) == 84 && check_base(ops) == 84 || \
    check_base(base) == 84 || check_base(ops) == 84)
        return (84);
    if (expr[nb] == '*' || expr[nb] == '+' || expr[nb] == '-' || \
    expr[nb] == '%' || expr[nb] == '/' || expr[nb] == '(')
        return (84);
    if (check_num_bracket(expr, ops, nb) == 84)
        return (84);
    if (check_base_and_ops(base, ops) == 84)
        return (84);
    for (int i = 0; expr[i] != '\0' && i < nb; i++)
        if (check_string(expr[i], base) == 84 && \
        check_string(expr[i], ops) == 84)
            return (84);
    return (0);
}