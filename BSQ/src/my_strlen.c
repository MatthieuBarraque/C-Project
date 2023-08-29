/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
