/*
** EPITECH PROJECT, 2022
** init.c
** File description:
** init.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void put_x(char **map, s_t *data)
{
    for (int i = 0; i < data->rows; i++) {
        for (int j = 0; j < data->cols; j++) {
            map[i][j] = 'X';
            map[data->rows * 0][data->cols * 0] = '*';
            map[(data->rows * 0) + 1][data->cols * 0] = '*';
            map[data->rows - 1][data->cols - 1] = '*';
            map[data->rows - 1][data->cols - 2] = '*';
        }
    }
}

void print_maze(char **map, s_t *data)
{
    for (int i = 0; i < data->rows; i++) {
        write(1, map[i], data->cols);
        my_putstr("\n");
    }
}

int generate(s_t *data)
{
    char *filename = "maze.txt";
    srand(time(NULL));
    char **map = (char **)malloc(sizeof(char *) * data->rows);
    for (int i = 0; i < data->rows; i++) {
        map[i] = (char *)malloc(sizeof(char) * data->cols);
    }
    put_x(map, data);
    generation(map, data, 1, 1);
    print_maze(map, data);
    put_txt(map, data, filename);
    free_map(map, data);
    free(map);
    return 0;
}
