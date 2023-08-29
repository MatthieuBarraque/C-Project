/*
** EPITECH PROJECT, 2023
** my_strarray.c
** File description:
** my_strarray.c
*/
#include <stdlib.h>

char *my_strncpy(char *dest, const char *src, int n);

char ** str_to_array(const char *str, char rm)
{
    int count = 0, i = 0, j = 0, k = 0;
    char ** arr = NULL;
    while (str[i]) {
        while (str[i] == rm) i++;
        if (str[i]) count++;
        while (str[i] && str[i] != rm) i++;
    }
    arr = (char **)malloc((count + 1) * sizeof(char *));
    i = 0;
    while (str[i]) {
        while (str[i] == rm) i++;
        j = i;
        while (str[j] && str[j] != rm) j++;
        arr[k] = (char *)malloc((j - i + 1) * sizeof(char));
        my_strncpy(arr[k++], str + i, j - i);
        arr[k - 1][j - i] = '\0';
        i = j;
    }
    arr[count] = NULL;
    return arr;
}
