/*
** EPITECH PROJECT, 2020
** My.h
** File description:
** Header on my function
*/

#ifndef MY_H
#define MY_H

void my_putchar(char c);
void my_put_nbr(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src, int debut, int fin);
int my_getnbr(char const *str);
int stradd(char *str, char *str1, char *str2);
int strsubb(char *str, char *str1, char *str2);
int strmod(char *str, char *str1, char *str2);
int strmult(char *str, char *str1, char *str2);
int strdiv(char *str, char *str1, char *str2);
int my_strlen_2(char const *str);
char *my_strcpy_2(char *dest, char const *src);
char *my_strcpy_1(char const *src);
int my_strlint(int nb);
char *regroup(char *str_2, char *str_1, int result);
char *my_revstr(char *str);
char *decoupe(char *str);


#endif
