/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef STRUCT_H_
    # define STRUCT_H_

    typedef struct structure {
        int rows;
        int cols;
    }s_t;

    void generation(char **map, s_t *data, int r, int c);
    void put_txt(char **map, s_t *data, char *filename);
    void free_map(char **map, s_t *data);
    int generate(s_t *data);
    void print_maze(char **map, s_t *data);
    int generate_i(s_t *data);
    void generation_i(char **map, s_t *data, int ligne, int col);
    void put_x(char **map, s_t *data);
    void imperfect_maze(char **map, s_t *data, int ligne, int col);
    int generate_i(s_t *data);
    void direction_aleatoire(int directions[4][2]);
    int cellules_vierge(s_t *data, int ligne, int col);

#endif
