/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

char *nombre_ligne(char *map)
{
    char *occu;
    int i = 0;
    int j = 0;
    while (map[j] != '\n')
        j++;
    occu = malloc(sizeof(char) * (j + 1));
    while (map[i] != '\n') {
        occu[i] = map[i];
        i++;
    }
    occu[i] = '\0';
    return occu;
}

int nombre_colones(char *map)
{
    int i = my_strlen(nombre_ligne(map)) + 1;
    int colones = 0;
    while (map[i] != '\n') {
        colones++;
        i++;
    }
    return colones;
}

int index_i(char *map)
{
    int i;
    while (map[i] != '\n') {
        i++;
    }
    return i;
}
