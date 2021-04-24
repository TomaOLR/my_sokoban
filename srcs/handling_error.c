/*
** EPITECH PROJECT, 2019
** handling_error.c
** File description:
** Thomas Olry's handling_error.c made the 11/26/2019
*/

#include "sokoban.h"

int bad_character(char **map)
{
    int j;

    for (int i = 0; map[i] != NULL; i++, j = 0) {
        for (j = 0; map[i][j] != '\0'; j++)
            if (map[i][j] != '\n' && map[i][j] != '#' && map[i][j] != 'X'
                && map[i][j] != 'O' && map[i][j] != 'P' && map[i][j] != ' ')
                exit(EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

int handling_error(char **map)
{
    if (checking(map, 'O') != checking(map, 'X'))
        exit (84);
    if (checking(map, 'P') > 1)
        exit (84);
    bad_character(map);
}
