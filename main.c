/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "include/my.h"

int summands(char **str_ptr);

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(summands(av));
        my_putchar('\n');
        return (0);
    }
    write(2, "84", 3);
    return (84);
}
