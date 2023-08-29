/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** my_strncmp.c
*/

int my_strncmp(char *a, char *b, int n)
{
    int i = 0;
    while (a[i] == b[i] && a[i] && b[i] && i < n) {
        i = i + 1;
    }
    if ((a[i] == '\0' && b[i] == '\0') || i == n) {
        return (0);
    }
    if (a[i] > b[i]) {
        return (1);
    } else {
        return (-1);
    }
}
