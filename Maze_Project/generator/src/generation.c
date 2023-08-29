/*
** EPITECH PROJECT, 2022
** generation.c
** File description:
** generation.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int cellules_vierge(s_t *data, int ligne, int col)
{
    if (ligne >= 0 && ligne < data->rows && col >= 0 && col < data->cols) {
        return 1;
    } else {
        return -1;
    }
}

void direction_aleatoire(int directions[4][2])
{
    for (int i = 0; i < 4; i++) {
        int j = rand() % 4;
        swap(&directions[i][0], &directions[j][0]);
        swap(&directions[i][1], &directions[j][1]);
    }
}

void generation(char **map, s_t *data, int ligne, int col)
{
    map[ligne][col] = '*';
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    direction_aleatoire(directions);
    int vec = 2;
    for (int i = 0; i < 4; i++) {
        int new_ligne = ligne + directions[i][0] * vec;
        int new_col = col + directions[i][1] * vec;
        if (cellules_vierge(data, new_ligne, new_col) == 1
            && map[new_ligne][new_col] == 'X') {
            map[ligne + directions[i][0]][col + directions[i][1]] = '*';
            generation(map, data, new_ligne, new_col);
        }
    }
}
