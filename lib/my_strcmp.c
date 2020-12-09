/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compares two string
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 < len_s2)
        return (-1);
    if (len_s2 < len_s1)
        return (1);
    if (len_s1 == len_s2)
        return (0);
    return (0);
}