/*
** EPITECH PROJECT, 2022
** mini_printf.c
** File description:
** mini_printf
*/
#include <stdlib.h>
int my_strlen(char *str);

void reverse(char* str)
{
    int n = my_strlen(str);
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}

char* my_hexadecimale(int nbr)
{
    int rem = 0;
    int i = 0;
    char *hex;
    hex = malloc(sizeof(char));
    while (nbr > 0 && i >= 0) {
        rem = nbr % 16;
        hex[i] = rem < 10 ? (char)rem + 48 : (char)rem + 55;
        nbr /= 16;
        i++;
    }
    hex[i] = '\0';
    reverse(hex);
    return hex;
}
