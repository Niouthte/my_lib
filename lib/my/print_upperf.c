/*
** EPITECH PROJECT, 2023
** print_upperf.c
** File description:
** print upper f function
*/
#include "include/my.h"
int printf_upperf(double nb)
{
    int count = 0;
    int whole = nb;

    count += my_put_nbr(whole);
    count += my_putchar('.');
    nb = nb - whole;
    for (int z = 1; z <= 6; z++) {
        nb *= 10;
    }
    whole = nb;
    count += my_put_nbr(whole);
}
