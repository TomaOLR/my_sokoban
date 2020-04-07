/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** Day05
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (nb) {
        if (my_is_prime(nb) == 1)
            return (nb);
        nb++;
    }
}
