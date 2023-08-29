/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;
    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i += 1;
    }
    if (i == n) {
        dest[i] = '\0';
    }
    return dest;
}
