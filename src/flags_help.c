/*
** EPITECH PROJECT, 2020
** flag help
** File description:
** flags help
*/

#include "my.h"

int flag_help(void)
{
    my_puts("Welcome to my game !!\n");
    my_puts("DESCRIPTION");
    my_puts("       My_hunter is a shooter game.");
    my_puts("       You have to shoot the ducks.");
    my_puts("CONTROLS");
    my_puts("       You have to use your mouse for to shoot the ducks");
    my_putstr("       you have 3 life and if you fail your shoot you");
    my_puts(" lost one life");
    my_puts("you will be the BEST !?\n");
    my_puts("good luck and half fun !");
}

int error_handing(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0') {
        flag_help();
        return (2);
    }
    if (ac > 1)
        return (1);
    return (0);
}
