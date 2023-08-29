/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

char **str_to_tab(char *map)
{
    char **tab;
    int i = 0;
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    tab = malloc(sizeof(char *) * ligne);
    while (i != ligne) {
        tab[i] = malloc(sizeof(char) * colones);
        i++;
    }
    tab[i] = NULL;
    return put_replace(tab, map);
}

int **str_to_array(char *map)
{
    int **tab;
    int i = 0;
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    tab = malloc(sizeof(int *) * ligne);
    while (i != ligne) {
        tab[i] = malloc(sizeof(int) * colones);
        i++;
    }
    tab[i] = NULL;
    return replace(tab, map);
}

int **replace(int **tab, char *map)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    int index = index_i(map) + 1;
    for (int i = 0; i != ligne; i++) {
        for (int j = 0; j != colones; j++) {
            if (map[index] == '.')
                tab[i][j] = 1;
            else
                tab[i][j] = 0;
            index++;
        }
        index++;
    }
    return tab;
}

char **put_replace(char **tab, char *map)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    int index = index_i(map) + 1;
    for (int i = 0; i != ligne; i++) {
        for (int j = 0; j != colones; j++) {
            tab[i][j] = map[index];
            index++;
        }
        index++;
    }
    return tab;
}
