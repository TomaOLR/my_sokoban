/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** Day05
*/

int my_is_prime(int nb)
{
    int i = 1;
    int x = 0;

    if (nb != 2 && nb % 2 == 0 || nb == 1 || nb == 0)
        return (0);
    while (i < 9) {
        if (nb % i == 0)
            x++;
        i++;
    }
    if (x > 2)
        return (0);
    else if (x <= 2 && nb % 1 == 0)
        return (1);
}
