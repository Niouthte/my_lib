/*
** EPITECH PROJECT, 2023
** print_f.c
** File description:
** %f
*/

#include "include/my.h"

int printf_f(double nb, int precision)
{
    int count = 0;
    int whole = nb;

    count += my_put_nbr(whole);
    count += my_putchar('.');
    nb = nb - whole;
    for (int z = 1; z <= precision; z++) {
        nb *= 10;
    }
    whole = nb;
    count += my_put_nbr(whole);
    return count;
}
