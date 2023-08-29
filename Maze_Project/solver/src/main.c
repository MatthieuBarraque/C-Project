/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/struct.h"

int main(int argc, char *argv[])
{
    s_t *data = malloc(sizeof(s_t));
    if (argc != 2) {
        exit(84);
    }
    data->maze = text_to_array(argv[1], data->rows, data);
    char *file_path = strdup(argv[1]);
    init_solver(data, argc, argv);
    init_struct(data, file_path);
    init_bfs(data);
    return 0;
}
