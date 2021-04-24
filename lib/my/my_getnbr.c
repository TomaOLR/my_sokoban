/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Day04
*/

#include <stdio.h>

void my_put_nbr(int nb);
void my_putchar(char c);

int my_getnbr(char *str)
{
    int i;
    int n;

    i = 0;
    n = 0;
    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0')
    {

        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n /= 10;
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}

void main()
{
    printf("%d", my_getnbr("0"));
}
