/*
** EPITECH PROJECT, 2022
** free.c
** File description:
** free.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void free_map(char **map, s_t *data)
{
    for (int i = 0; i < data->rows; i++) {
        free(map[i]);
    }
}
