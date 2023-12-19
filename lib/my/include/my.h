/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** All mylib prototypes.
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <stdarg.h>
    #include <dirent.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
    #include <ncurses.h>
    #include <fcntl.h>

typedef struct pos {
    int x;
    int y;
} pos;

typedef struct game_status {
    pos *player;
    int nb_boxes;
    int nb_spot;
    char **map_copy;
    char *str;
    int win;
    int loose;
    int nb_p;
    int return_value;
} game_status_t;

struct my_flags {
    int minus;
    int plus;
    int space;
    int diese;
    int zero;
};

typedef struct get_flag {
    struct my_flags my_flag;
    int my_width;
    int my_precision;
    char my_length;
    char my_specifier;
} get_flag_t;


int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strlen_bis(char const *str);
int my_is_prime_bis(int nb);
char **my_str_to_word_array(char const *str);
char **copy_array(char const *str, char **array);
int my_is_alphanum(char c);
char my_charlowcase(char c);
int my_printf(const char *format, ...);
int print_d(const char *format, va_list list, int i, get_flag_t flag);
int print_i(const char *format, va_list list, int i, get_flag_t flag);
int print_s(const char *format, va_list list, int i, get_flag_t flag);
int print_c(const char *format, va_list list, int i, get_flag_t flag);
int print_percent(const char *format, va_list list, int i, get_flag_t flag);
int print_p(const char *format, va_list list, int i, get_flag_t flag);
int my_unsigned_nbr(unsigned int nb);
int print_u(const char *specifier, va_list list, int i, get_flag_t flag);
int print_hex_address(void *ptr);
int print_o(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_o(unsigned int nb);
int print_lowerx(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_x(unsigned int nb);
int print_upperx(const char *specifier, va_list list, int i, get_flag_t flag);
int my_unsigned_upperx(unsigned int nb);
int loop_upperx(unsigned int nb, char *hexupper, int *y, int count);
int loop_x(unsigned int nb, char *hexlower, int *y, int count);
get_flag_t get_all_flags(const char *format, int *i);
int front_padding_int(get_flag_t flag, int arg_int);
int back_padding_int(get_flag_t flag, int arg_int);
int front_padding_str(get_flag_t flag, char *arg_str);
int back_padding_str(get_flag_t flag, char *arg_str);
int front_padding_char(get_flag_t flag);
int back_padding_char(get_flag_t flag);
int print_space_plus(get_flag_t flag, int arg_int);
int printf_f(double nb, int precision);
int printf_upperf(double nb);
int print_upperf(const char *specifier, va_list list, int i, get_flag_t flag);
int print_f(const char *specifier, va_list list, int i, get_flag_t flag);
int plus_flag(get_flag_t flag, int arg_int);
int space_flag(get_flag_t flag, int arg_int);
int dash_h(void);
char **sokoban_my_str_to_word_array(char const *str);
void move_right(char **map, game_status_t *game_status);
void move_up(char **map, game_status_t *game_status);
void move_down(char **map, game_status_t *game_status);
void move_left(char **map, game_status_t *game_status);
void get_player_pos(char **map, game_status_t *game_status, char *buffer);

#endif /* MY_H_ */
