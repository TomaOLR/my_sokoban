/*
** EPITECH PROJECT, 2019
** compute_power_it
** File description:
** Day05
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    if (p < 0)
        return (0);
    return (nb * my_compute_power_rec(nb, p - 1));
}
