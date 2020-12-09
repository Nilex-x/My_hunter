/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display string
*/

#include "my.h"

int my_putstr(char const *str)
{
    if (str == 0)
        return (1);
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}