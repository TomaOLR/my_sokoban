/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** Day05
*/

int my_compute_square_root(int nb)
{
    int res = 1;
    int i = 1;

    if (nb == 0 || nb == 1)
        return (nb);
    while (i <= nb) {
        res++;
        i = res * res;
    }
    if (nb % res != 0)
        return (0);
    return (res - 1);
}
