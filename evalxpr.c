/*
** EPITECH PROJECT, 2021
** evalxprhugo
** File description:
** evalxprboot
*/

#include "include/my.h"
#include <stdlib.h>

int jcalcul(char **str_ptr);
int number(char **str_ptr);
int number_strol(char *str_ptr);
int my_strol(char *str, char **endptr);

int summands(char **str_ptr)
{
    int result = 0;
    int debut = number(str_ptr);
    int fin = 0;
    char signe;

    my_strol(str_ptr[1], &str_ptr[1]);
    signe = str_ptr[1][0];
    if (signe == '+') {
        (str_ptr++);
        (str_ptr[0]++);
        fin = my_getnbr(*str_ptr);
        result = debut + fin;
        my_strol(str_ptr[0], &str_ptr[0]);
    } else if (signe == '-') {
        (str_ptr++);
        (str_ptr[0]++);
        fin = my_getnbr(*str_ptr);
        result = debut - fin;
    }
    return result;
}

int factors (char **str_ptr)
{
    int result = 0;
    int debut = number(str_ptr);
    int fin = 0;
    char signe;

    my_strol(str_ptr[1], &str_ptr[1]);
    signe = str_ptr[1][0];
    if (signe == '*') {
        (str_ptr++);
        (str_ptr[0]++);
        fin = my_getnbr(*str_ptr);
        result = debut * fin;
    } else if (signe == '/') {
        (str_ptr++);
        (str_ptr[0]++);
        fin = my_getnbr(*str_ptr);
        result = debut / fin;
    }
    return result;
}
