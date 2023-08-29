/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
char my_putchar(char c);

int my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
