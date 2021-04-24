/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** Day04
*/

void my_swap(int *a, int *b)
{
    int box = *a;
    *a = *b;
    *b = box;
}
