/*
** EPITECH PROJECT, 2023
** bfs.c
** File description:
** bfs.c
*/

#include "../../include/my.h"
#include "../../include/struct.h"


void ouest(struct Node* c, bfs_t *b,int v[][b->COLS], struct Node* queue[])
{
    struct Node* ouest = malloc(sizeof(struct Node));
    ouest->row = c->row;
    ouest->col = c->col - 1;
    ouest->parent = c;
    v[ouest->row][ouest->col] = 1;
    queue[++b->rear] = ouest;
}
