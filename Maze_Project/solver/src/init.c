/*
** EPITECH PROJECT, 2023
** init.c
** File description:
** init.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void init_struct(s_t *data, char *file_path)
{
    data->rows = 0;
    data->cols = 0;
    data->rows = nbr_rows(file_path);
    char *map = maze_open(file_path);
    data->cols = nbr_cols(map);
}

void init_solver(s_t *data, int argc, char **argv)
{
    char *filename = argv[1];
    data->file = fopen(filename, "r");
    if (data->file == NULL) {
        exit(84);
    }
    data->buffer = NULL;
    data->buffer = (char *)malloc(sizeof(char) * 1024);
    free(data->buffer);
    fclose(data->file);
}
