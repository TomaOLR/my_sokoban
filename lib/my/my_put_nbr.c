/*
** EPITECH PROJECT, 2019
** put_nbr
** File description:
** Day03
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    int mod = 0;

    if (nb <= 9 && nb >= 0)
        my_putchar(nb + '0');
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        mod = nb % 10;
        my_put_nbr(nb / 10);
        my_putchar(mod + '0');
    }
}
