/*
** EPITECH PROJECT, 2022
** my_binaire
** File description:
** my_binaire
*/

int my_binaire(int nbr)
{
    int bin = 0;
    int rem, i = 1;
    while (nbr != 0) {
        rem = nbr % 2;
        nbr /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
