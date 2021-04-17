/*
** EPITECH PROJECT, 2020
** regoup
** File description:
** 2 string on just 1
*/

#include <stdlib.h>
#include "lib/my.h"

char *my_getint(int result, char *str_result)
{
    int nb = result;
    int temp = 0;

    str_result = malloc(sizeof(char) * my_strlint(result) + 1);
    for (int sous_result = my_strlint(result), nb2; temp != sous_result; temp++) {
        while (result > 10) {
            result = result / 10;
            nb2++;
        }
        str_result[temp] = result + 48;
        while(nb2 != 0) {
            result = result * 10;
            nb2--;
        }
        nb = nb - result;
        result = nb;
    }
    return (str_result);
}

int my_strlint(int nb)
{
     int result = 1;

    while (nb > 10) {
        nb = nb / 10;
        result++;
    }
    return (result);
}

char *my_strcpy_3(char *dest, char *src, int nb, int temp)
{
    int i = 0;
    int nb_two = 0;
    char *str = NULL;

    str = malloc(sizeof(char) * my_strlen(src) + my_strlen(dest));
    while (dest[i] != '\0') {
        if (nb == i) {
            for (int nb_tree = 0; src[nb_tree] != '\0'; nb_tree++, i++) {
                str[i] = src[nb_tree];
            }
            nb_two = temp + 1;
        }
        str[i] = dest[nb_two];
        nb_two++;
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *regroup(char *str_2, char *str_1, int result)
{
     int a = 0;
     int nb = 0;
     int temp = 0;
     char *str_result = NULL;

    str_result = malloc(sizeof(char) * my_strlint(result));
    str_result = my_getint(result, str_result);
    while (str_2[a] != '\0') {
        if (str_2[a] == str_1[temp])
            temp++;
        if (str_1[temp] == '\0') {
            temp = temp - 1;
            nb = a;
            break;
        }
        a++;
    }
    a = nb;
    nb = nb - temp;
    return (my_strcpy_3(str_2, str_result, nb, a));
}