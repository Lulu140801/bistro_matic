/*
** EPITECH PROJECT, 2020
** B-CPE-101-TLS-1-1-bistromatic-kevin.roland [WSL: Ubuntu-20.04]
** File description:
** infin_add_v2
*/

#include <stdlib.h>

char *calc(char **argv, int size_loop, int size1, int size2)
{
    int num2 = 0;
    int num1 = 0;
    int k = 0;
    char *str = malloc(sizeof(char) * size_loop + 2);

    str[size_loop + 1] = '\0';
    for(; size_loop != 0; size_loop--, size1--, size2--, k++) {
            num1 = argv[1][size1] - 48;
            num2 = argv[2][size2] - 48;
            num1 = num1 - num2;
            str[k] = num1 + 48;
    }
    return (my_revstr(str));
}

char *infin_sub(char **argv)
{
    int size1 = 0;
    int size2 = 0;
    int size_loop = 0;

    size1 = my_strlen(argv[1]);
    size2 = my_strlen(argv[2]);
    if (size1 < size2)
        size_loop = size2;
    else
        size_loop = size1;
    return (calc(argv, size_loop, size1 - 1, size2 - 1));
}

int main(int argc, char **argv)
{
    if (argc == 3)
        my_putstr(infin_sub(argv));
    else
        return 84;
}