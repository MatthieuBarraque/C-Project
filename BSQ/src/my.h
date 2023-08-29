/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    # define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <unistd.h>

    char *my_strdup(const char *str);
    int my_strlen(char *str);
    int my_putstr(char *str);
    int	my_getnbr(char *str);
    char my_putchar(char c);
    void my_putnbr(int nb);
    char *nombre_ligne(char *map);
    int nombre_colones(char *map);
    char *algo(char *map);
    char *algoadd(char *map);
    int **str_to_array(char *map);
    char **str_to_tab(char *map);
    char **put_replace(char **tab, char *map);
    int **replace(int **arr, char *map);
    int index_i(char *map);
    int addition(int **tab_r, int i, int j);
    int **pos_add(int **tab_r, char *map);
    char **replace_x(char **map_r, int **tab_r, char *map, int carre);
    int g_carre(int **tab_r, int ligne, int colones);

#endif
