/*
** EPITECH PROJECT, 2023
** print_maze.c
** File description:
** print_maze.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void printmaze(s_t *data)
{
    for (int i = 0; i < data->rows; i++) {
        for (int j = 0; j < data->cols; j++) {
            printf("%c", data->maze[i][j]);
        }
        printf("\n");
    }
}
