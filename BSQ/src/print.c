/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
#include "my.h"

void print(char **map_r, char *map)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    for (int i = 0; i < ligne; i++) {
        write(1, map_r[i], colones);
        ligne++;
    }
}
