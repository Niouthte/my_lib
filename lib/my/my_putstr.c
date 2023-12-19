/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my_putstr
*/

#include "include/my.h"

int my_putstr(const char *s)
{
    int	count;
    int i = 0;

    count = 0;
    while (s[i] != 0) {
        count += my_putchar(s[i]);
        i++;
    }
    return count;
}
