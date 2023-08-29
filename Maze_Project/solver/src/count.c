/*
** EPITECH PROJECT, 2023
** count.c
** File description:
** count.c
*/

#include "../include/my.h"
#include "../include/struct.h"

char *param_1(char *map)
{
    char *occu;
    int i = 0;
    int j = 0;
    while (map[j] != '\n')
        j++;
    occu = malloc(sizeof(char) * (j + 1));
    while (map[i] != '\n') {
        occu[i] = map[i];
        i++;
    }
    occu[i] = '\0';
    return occu;
}

int nbr_cols(char *map)
{
    int i = strlen(param_1(map)) + 1;
    int colones = 0;
    while (map[i] != '\n') {
        colones++;
        i++;
    }
    return colones;
}

int nbr_rows(char *file_path)
{
    char *filename = file_path;
    FILE *fp = fopen(filename, "r");
    int num_lines = 0;
    char line[1024];
    while (fgets(line, sizeof(line), fp) != NULL) {
        num_lines++;
    }
    fclose(fp);
    return num_lines;
}

long size_file(char const *file_path)
{
    struct stat taille;
    stat(file_path, &taille);
    return taille.st_size;
}

char *maze_open(char *file_path)
{
    int fd = open(file_path, O_RDONLY);
    if (fd == -1)
        exit(84);
    char *map;
    int taille = size_file(file_path);
    if (fd == -1 || taille == -1)
        exit(84);
    map = malloc(sizeof(char) * (taille + 1));
    int des = read(fd, map, taille);
    if (!map || des == -1)
        exit(84);
    map[taille] = '\0';
    close(fd);
    return (map);
}
