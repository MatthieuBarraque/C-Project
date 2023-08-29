/*
** EPITECH PROJECT, 2023
** bfs.c
** File description:
** bfs.c
*/

#include "../../include/my.h"
#include "../../include/struct.h"


void sud(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[])
{
    struct Node* sud = malloc(sizeof(struct Node));
    sud->row = c->row + 1;
    sud->col = c->col;
    sud->parent = c;
    v[sud->row][sud->col] = 1;
    queue[++b->rear] = sud;
}
