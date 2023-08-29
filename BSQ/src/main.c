/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

long size_file(char const *file_path)
{
    struct stat taille;
    stat(file_path, &taille);
    int size = taille.st_size;
    return taille.st_size;
}

char *affichage_map(char *file_path)
{
    int fd = open(file_path, O_RDONLY);
    char *map;
    int taille = size_file(file_path);
    if (fd == -1 || taille == -1)
        return 0;
    map = malloc(sizeof(char) * (taille + 1));
    int des = read(fd, map, taille);
    if (!map || des == -1)
        return 0;
    map[taille] = '\0';
    close(fd);
    return (map);
}

void printres(char **map_r, char *map)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    for (int i = 0; i != ligne; i++) {
        write(1, map_r[i], colones);
        my_putchar('\n');
    }
}

void bsq(char *map)
{
    int colones = 0;
    int ligne = 0;
    char **map_r;
    int **tab_r;
    int carre = 0;
    ligne = my_getnbr(nombre_ligne(map));
    colones = nombre_colones(map);
    tab_r = str_to_array(map);
    map_r = str_to_tab(map);
    pos_add(tab_r, map);
    carre = g_carre(tab_r, ligne, colones);
    replace_x(map_r, tab_r, map, carre);
    printres(map_r, map);
}

int main(int argc, char **argv)
{
    char *map;
    char *file_path = my_strdup(argv[1]);
    if (argc < 1)
        return 84;
    else
        map = affichage_map(file_path);
        bsq(map);
    return 0;
}
