/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
#include "my.h"
int my_strlen(char *str);

char *my_strdup(const char *str)
{
    size_t len = my_strlen(str);
    char *result = malloc(len + 1);
    for (size_t i = 0; i <= len; i++)
        result[i] = str[i];
    return result;
}
