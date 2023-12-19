/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** strdup
*/

#include "include/my.h"

char *my_strdup(const char *src)
{
    char *dest = (char *)malloc(my_strlen(src) + 1);

    if (dest == NULL) {
        return NULL;
    }
    my_strcpy(dest, src);
    return dest;
}

char *my_strndup(const char *src, int n)
{
    char *dest = (char *)malloc(my_strlen(src) + 1);

    if (dest == NULL) {
        return NULL;
    }
    my_strncpy(dest, src, n);
    return dest;
}

char *my_strn_dup_end(const char *src, int n)
{
    char *dest = (char *)malloc(my_strlen(src) + 1);

    if (dest == NULL) {
        return NULL;
    }
    my_strn_end_cpy(dest, src, n);
    return dest;
}
