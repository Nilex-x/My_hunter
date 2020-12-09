/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** header
*/

#ifndef MY
#define MY

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_struct.h"

#define _GNU_SOURCE
#define MENU (0)
#define GAME (1)
#define PAUSE (2)
#define HIGH ("assets/high_score")

int count_char(char *str, char to_find);
int my_atoi(char *str);
int my_getnbr_n(char *str, int n);
int my_getnbr(char *str);
char *my_int_to_str(int nb);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putchar_error(char c);
void my_puts(char *str);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
char **my_str_to_word_array(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int n);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int error_handing(int ac, char **av);
void load_compoment(window_t *window, menu_t *menu, pause_t *pause, \
                    duck_t *duck);
void load_menu(menu_t *menu);
void load_pause(pause_t *pause);
int sort_button_menu(sfMouseButtonEvent mouse, menu_t *menu, window_t *window);
int sort_button_game(sfMouseButtonEvent mouse, duck_t *duck, window_t *window);
void sort_button_pn(sfMouseButtonEvent mouse, pause_t *pause, \
                    window_t *window);
int sort_button_p(sfMouseButtonEvent mouse, pause_t *pause, window_t *window);
void display_menu(window_t *window, menu_t *menu);
void display_pause(window_t *window, pause_t * pause, menu_t *menu);
void display_game(window_t *window, duck_t *duck);
void load_crosshair(window_t *window);
void load_music(window_t * window);
void load_game(duck_t *duck);
void animate_dog(duck_t *dog, window_t *window);
void animate_duck(duck_t *duck, window_t *window);
void load_title(window_t *window);
void load_life(window_t *window);
char *get_high_score(void);
void find_high_score(window_t *window);
void load_level(window_t *window);
void load_bullet(window_t *window);
void game_over(window_t *window);
void update_bullet(window_t *window);

#endif /* !MY */