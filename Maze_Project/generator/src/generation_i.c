/*
** EPITECH PROJECT, 2023
** generation_i.c
** File description:
** generation_i.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void imperfect_maze(char **map, s_t *data, int ligne, int col)
{
    map[ligne][col] = '*';
    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    direction_aleatoire(directions);
    int vec = 2;
    for (int i = 0; i < 4; i++) {
        int new_ligne = ligne + directions[i][0] * vec;
        int new_col = col + directions[i][1] * vec;
        if (cellules_vierge(data, new_ligne, new_col) == 1 &&
        (map[new_ligne][new_col] == 'X' || map[new_ligne][new_col] == '*')) {
            map[ligne + directions[i][0]][col + directions[i][1]] = '*';
            generation(map, data, new_ligne, new_col);
        }
    }
}

int generate_i(s_t *data)
{
    char *filename = "maze.txt";
    srand(time(NULL));
    char **map = (char **)malloc(sizeof(char *) * data->rows);
    for (int i = 0; i < data->rows; i++) {
        map[i] = (char *)malloc(sizeof(char) * data->cols);
    }
    put_x(map, data);
    generation(map, data, 1, 1);
    imperfect_maze(map, data, 1, 1);
    print_maze(map, data);
    put_txt(map, data, filename);
    free_map(map, data);
    free(map);
    return 0;
}
