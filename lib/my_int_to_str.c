/*
** EPITECH PROJECT, 2020
** my_int_to_str
** File description:
** put an int on an string
*/

#include "my.h"

char *my_int_to_str(int nb)
{
    int index = 0;
    int verif = 0;
    char *string = NULL;

    string = malloc(sizeof(char) * 11 + 1);
    if (nb < 0) {
        verif = 1;
        nb *= -1;
    }
    if (nb == 0) {
        string[index] = '0';
        index++;
    }
    while (nb > 0) {
        string[index] = nb % 10 + 48;
        nb = nb / 10;
        index++;
    }
    if (verif == 1) {
        string[index] = '-';
        string[index + 1] = '\0';
    } else string[index] = '\0';
    string = my_revstr(string);
    return (string);
}