/*
** EPITECH PROJECT, 2023
** my_isalphanum.c
** File description:
** Return 1 if alphanumeric 0 if not.
*/

int my_is_alphanum(char c)
{
    if (c == '.') {
        return 1;
    }
    if ('0' <= c && c <= '9') {
        return (1);
    }
    if ('A' <= c && c <= 'Z') {
        return (1);
    }
    if ('a' <= c && c <= 'z') {
        return (1);
    } else {
        return (0);
    }
}

int my_is_num(char c)
{
    if ('0' <= c && c <= '9') {
        return (1);
    } else {
        return (0);
    }
}
