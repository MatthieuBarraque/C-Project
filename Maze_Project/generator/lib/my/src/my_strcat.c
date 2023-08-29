/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;
    while (dest[i]) {
        i += 1;
    }
    while (src[j]) {
        dest[i] = src[j];
        i += 1;
        j += 1;
    }
    dest[i] = '\0';
    return dest;
}
