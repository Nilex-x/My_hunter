/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** count char in string
*/

int my_strlen(char const *str)
{
    int total = 0;

    if (str == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        total++;
    return (total);
}