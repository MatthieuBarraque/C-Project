/*
** EPITECH PROJECT, 2022
** put_txt.c
** File description:
** put_txt.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void put_txt(char **map,s_t *data, char *filename)
{
    FILE *file = fopen(filename, "w");
    for (int i = 0; i < data->rows; i++) {
        fprintf(file, "%s\n", map[i]);
    }
    fclose(file);
}
