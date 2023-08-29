/*
** EPITECH PROJECT, 2022
** emacs my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
