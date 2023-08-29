/*
** EPITECH PROJECT, 2023
** bfs.c
** File description:
** bfs.c
*/

#include "../../include/my.h"
#include "../../include/struct.h"


void est(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[])
{
    struct Node* est = malloc(sizeof(struct Node));
    est->row = c->row;
    est->col = c->col + 1;
    est->parent = c;
    v[est->row][est->col] = 1;
    queue[++b->rear] = est;
}
