/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <string.h>

int main(int argc, char **argv)
{
    s_t *data = malloc(sizeof(s_t));
    data->rows = my_getnbr(argv[1]);
    data->cols = my_getnbr(argv[2]);
    const char *word = argv[3];
    const char *option = "perfect";
    if (data->rows < 3 || data->cols < 3)
        exit(84);
    if (argc == 3) {
    generate_i(data);
    } else if (argc == 4 && strstr(word, option) != NULL) {
    generate(data);
    } else {
        exit(84);
    }
    free(data);
    return 0;
}
