/*
** EPITECH PROJECT, 2023
** bfs.c
** File description:
** bfs.c
*/

#include "../include/my.h"
#include "../include/struct.h"

void getpath(struct Node* node, s_t *data)
{
    if (node->parent == NULL) {
        return;
    }
    getpath(node->parent, data);
    data->maze[node->row][node->col] = 'o';
}

void check_pos(s_t *data, bfs_t *b, int v[][b->COLS], struct Node* queue[])
{
    while (b->front != b->rear) {
        struct Node* c = queue[++b->front];
        if (c->row == b->endRow && c->col == b->endCol) {
            getpath(c, data);
            return;
        }
        if (c->row - 1 >= 0 && data->maze[c->row - 1][c->col] == '*'
        && !v[c->row - 1][c->col])
            nord(c, b, v, queue);
        if (c->col + 1 < b->COLS && data->maze[c->row][c->col + 1] == '*'
        && !v[c->row][c->col + 1])
            est(c, b, v, queue);
        if (c->row + 1 < b->ROWS && data->maze[c->row + 1][c->col] == '*'
        && !v[c->row + 1][c->col])
            sud(c, b, v, queue);
        if (c->col - 1 >= 0 && data->maze[c->row][c->col - 1] == '*'
        && !v[c->row][c->col - 1])
            ouest(c, b, v, queue);
    }
}

void bfs(s_t *data, bfs_t *b)
{
    int v[b->ROWS][b->COLS];
    memset(v, 0, sizeof(v));
    struct Node* start = malloc(sizeof(struct Node));
    start->row = b->startRow;
    start->col = b->startCol;
    start->parent = NULL;
    v[b->startRow][b->startCol] = 1;
    struct Node* queue[b->ROWS * b->COLS];
    b->front = -1; b->rear = -1;
    queue[++b->rear] = start;
    check_pos(data, b, v, queue);
}

void put_txt(char **map,s_t *data, char *filename)
{
    FILE *file = fopen(filename, "w");
    for (int i = 0; i < data->rows; i++) {
        fprintf(file, "%s\n", map[i]);
    }
    fclose(file);
}

int init_bfs(s_t *data)
{
    bfs_t *b = malloc(sizeof(bfs_t));
    b->ROWS = data->rows;
    b->COLS = data->cols;
    b->startRow = 0; b->startCol = 0;
    b->endRow = data->rows - 1; b->endCol = data->cols - 1;
    bfs(data, b);
    data->maze[0][0] = 'o';
    put_txt(data->maze, data, "solved.txt");
    printmaze(data);
    return 0;
}
