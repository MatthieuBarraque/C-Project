/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include <unistd.h>

char my_putchar(char c)
{
    write(1, &c, 1);
}
