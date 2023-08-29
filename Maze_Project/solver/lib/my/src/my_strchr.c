/*
** EPITECH PROJECT, 2023
** my_strchr.c
** File description:
** my_strchr.c
*/
#include <unistd.h>

char* my_strchr(const char* str, int nbr)
{
    while (*str != '\0') {
        if (*str == nbr) {
            return (char*) str;
        }
        str++;
    }
    if (nbr == '\0') {
        return (char*) str;
    }
    return NULL;
}
