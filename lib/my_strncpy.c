/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copy n char of string in other str
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (src == 0)
        return (dest);
    for (; i <= n; i++) {
        if (src[i] != '\0' || src[i] != 0)
            dest[i] = src[i];
        else
            dest[i] = '\0';
    }
    dest[i] = '\0';
    return (dest);
}