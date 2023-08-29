/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

int addition(int **tab_r, int i, int j)
{
    int droite = tab_r[i][j - 1];
    int h_gauche = tab_r[i - 1][j - 1];
    int gauche = tab_r[i - 1][j];
    int tmp1, tmp2, tmp3, tmp4;
    if (droite == h_gauche && droite == gauche && h_gauche == gauche)
        return tmp1 = droite + 1;
    if (droite <= h_gauche && droite <= gauche)
        return tmp2 = droite + 1;
    if (h_gauche <= droite && h_gauche <= gauche)
        return tmp3 = h_gauche + 1;
    if (gauche <= droite && gauche <= h_gauche)
        return tmp4 = gauche + 1;
    return (0);
}

int **pos_add(int **tab_r, char *map)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    int index = index_i(map);
    for (int i = 1; i != ligne; i++) {
        for(int j = 1; j != colones; j++) {
            if (tab_r[i][j] != 0)
            tab_r[i][j] = addition(tab_r, i, j);
        }
    }
    return tab_r; 
}

int g_carre(int **tab_r, int ligne, int colones)
{
    int plus_grand_carre = 0;

    for (int i = 0; i != ligne; i++) {
        for (int pos_col = 0; pos_col != colones; pos_col++)
           if (tab_r[i][pos_col] > plus_grand_carre)
                plus_grand_carre = tab_r[i][pos_col];
        }
    return plus_grand_carre;
}

int tmp_abs(int **arr, char *map, int nb)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map); 
    for (int i = 0; i != ligne; i++) {
        for (int j = 0; j != colones; j++)
            if (arr[i][j] == nb)
                return (i);
    }
    return (0);
}

int tmp_ord(int **arr, char *map, int nb)
{
    int ligne = my_getnbr(nombre_ligne(map));
    int colones = nombre_colones(map);
    for (int i = 0; i != ligne; i++) {
        for (int j = 0; j != colones; j++)
            if (arr[i][j] == nb)
                return (j);
    }
    return (0);
}

char **replace_x(char **map_r, int **tab_r, char *map, int carre)
{
    int pos_a = tmp_abs(tab_r, map, carre);
    int pos_b = tmp_ord(tab_r, map, carre);
    for (int a = pos_a - (carre - 1); a <= pos_a; a++) {
        for (int b = pos_b - (carre - 1); b <= pos_b; b++)
            map_r[a][b] = 'x';
    }
    return map_r;
}
