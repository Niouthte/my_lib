/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** Concatenate two strings.
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    char *str = malloc(sizeof(char) * (dest_len + my_strlen(src) + 1));
    int i = 0;
    int j = 0;

    while (dest[i] != 0) {
        str[i] = dest[i];
        i++;
    }
    while (src[j] != 0) {
        str[i] = src[j];
        i++;
        j++;
    }
    str[dest_len + my_strlen(src)] = '\0';
    return str;
}
