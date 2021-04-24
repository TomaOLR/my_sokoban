/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Thomas Olry's main.c made the 11/25/2019
*/

#include "sokoban.h"
#include <stdio.h>

int helping(void)
{
    my_putstr("USAGE\n     ./my_sokoban\n");
    my_putstr("DESCRIPTION\n       ");
    my_putstr("map file representing the warehouse map,");
    my_putstr(" containing ‘#’ for walls,\n");
    my_putstr("           ‘P’ for the player, ‘X’ for boxes and");
    my_putstr(" ‘O’ for storage locations.\n");
    exit(EXIT_SUCCESS);
}

int main(int ac, char **av)
{
    char **map = NULL;

    if (ac == 1)
        return (EXIT_FAILURE);
    if (my_strcmp("-h", av[1]) == 0 || my_strcmp("--help", av[1]) == 0)
        helping();
    if (is_file(av[1]) == 0)
        return (EXIT_FAILURE);
    map = my_str_to_word_array(open_map(av[1]));
    handling_error(map);
    sokoban(map);
    return (EXIT_SUCCESS);
}
