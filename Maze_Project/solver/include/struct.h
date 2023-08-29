/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#include "my.h"

#ifndef STRUCT_H_
    # define STRUCT_H_

typedef struct structure {
    int rows;
    int cols;
    char *buffer;
    FILE *file;
    char **maze;
} s_t;

typedef struct bfs {
    int ROWS;
    int COLS;
    int **v;
    int front;
    int rear;
    int startRow, startCol, endRow, endCol;
} bfs_t;

typedef struct Node {
    int row, col;
    struct Node *parent;
} Node;

void init_solver(s_t *data, int argc, char **argv);
void init_struct(s_t *data, char *file_path);
char *maze_open(char *file_path);
int nbr_cols(char *map);
int nbr_rows(char *file_path);
int init_bfs(s_t *data);
void printCharArray(char **arr, int numLines);
char **text_to_array(char *fileName, int numLines, s_t *data);
void printmaze(s_t *data);
void nord(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[]);
void sud(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[]);
void est(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[]);
void ouest(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[]);

#endif
