/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "./../../include/my.h"

int my_put_nbr_pos(long int nb)
{
    long int div = 1;

    while ((nb / div) != 0)
        div = div * 10;
    while (div != 1) {
        my_putchar(((nb % div) / (div / 10)) + '0');
        div = div / 10;
    }
    return (0);
}

int my_put_nbr_neg(long int nb)
{
    long int div = 1;

    my_putchar('-');
    nb = -nb;
    while ((nb / div) != 0)
        div = div * 10;
    while (div != 1) {
        my_putchar(((nb % div) / (div / 10)) + '0');
        div = div / 10;
    }
    return (0);
}

int my_put_nbr(int nb)
{
    long int nbr = nb;

    if (nbr > 0)
        my_put_nbr_pos(nbr);
    else if (nbr < 0)
        my_put_nbr_neg(nbr);
    else
        my_putchar('0');
    return (0);
}