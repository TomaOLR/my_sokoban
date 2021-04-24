/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Day04
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char const *str);

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
