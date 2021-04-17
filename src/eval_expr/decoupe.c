/*
** EPITECH PROJECT, 2020
** decoupe
** File description:
** allows you to cut the string
*/

#include <stdlib.h>
#include "lib/my.h"

char *my_copy(int debut, int fin, char *str)
{
    char *src;
    int nb = 0;
    if (str[debut] > '9' || str[debut] < '0')
        debut = debut + 1;
    src = malloc(sizeof(char) * my_strlen(str));

    while (debut != fin) {
        src[nb] = str[debut];
        debut++;
        nb++;
    }
    src[nb] = '\0';
    return (src);
}

char *find(int nb, char *str)
{
    int temp = 0;
    int temp2 = 0;

    for (int nbone = nb - 1; nbone != 0; nbone--) {
        if (str[nbone] > '9' || str[nbone] < '0') {
            temp = nbone;

            break;
        }
    }
    for (int nbone = nb + 1; str[nbone] != '\0'; nbone++) {
        if (str[nbone] > '9' || str[nbone] < '0') {
            temp2 = nbone;

            break;
        }
    }
    if (temp2 == 0)
        temp2 = my_strlen(str);
    return(my_copy(temp, temp2, str));
}

char *decoupe(char *str)
{
    char operator[5] = "*/+-";
    int result = 0;
    int nb = 0;

    while (operator[nb] != '\0') {
        while (str[result] != '\0') {
            if (operator[nb] == str[result]) {
                return (find(result, str));
            }
            result++;
        }
        result = 0;
        nb++;
    }
    return (str);
}