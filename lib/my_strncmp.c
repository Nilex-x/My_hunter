/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** compares n char of two string
*/

int my_strlen_n(char const *str, int n)
{
    int total = 0;

    if (str == 0)
        return (0);
    for (int i = 0; str[i] != '\0' && i < n; i++)
        total++;
    return (total);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len_s1 = my_strlen_n(s1, n);
    int len_s2 = my_strlen_n(s2, n);

    if (len_s1 < len_s2)
        return (-1);
    if (len_s2 < len_s1)
        return (1);
    if (len_s1 == len_s2)
        return (0);
    return (0);
}