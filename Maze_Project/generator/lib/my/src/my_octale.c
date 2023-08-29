/*
** EPITECH PROJECT, 2022
** my_octale.c
** File description:
** my_octale.c
*/

int my_octale(int nbr)
{
    int octale = 0;
    int res = nbr;
    int i = 1;
    while (res != 0) {
        octale = octale + (res % 8) * i;
        res = res / 8;
        i = i * 10;
    }
    return octale;
}
