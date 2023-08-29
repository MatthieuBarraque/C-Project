/*
** EPITECH PROJECT, 2023
** bfs.c
** File description:
** bfs.c
*/

#include "../../include/my.h"
#include "../../include/struct.h"

void nord(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[])
{
    struct Node* nord = malloc(sizeof(struct Node));
    nord->row = c->row - 1;
    nord->col = c->col;
    nord->parent = c;
    v[nord->row][nord->col] = 1;
    queue[++b->rear] = nord;
}
