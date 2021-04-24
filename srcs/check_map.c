/*
** EPITECH PROJECT, 2019
** check_map.c
** File description:
** Thomas Olry's check_map.c made the 11/28/2019
*/

#include "sokoban.h"

int checking(char **map, char c)
{
    int obj = 0;
    int j = 0;

    for (int i = 0; map[i] != NULL; i += 1) {
        for (j = 0; j != my_strlen(map[i]); j += 1) {
            if (map[i][j] == c)
                obj += 1;
        }
        j = 0;
    }
    return (obj);
}

int *get_storage(char **map)
{
    int stor = checking(map, 'O');
    int *tab = malloc(sizeof(int) * (stor * 2));
    int j = 0;
    int x = 0;

    for (int i = 0; map[i] != NULL; i += 1, j = 0) {
        for (j = 0; j != my_strlen(map[i]); j += 1) {
            if (map[i][j] == 'O') {
                tab[x] = i;
                tab[x + 1] = j;
                x += 2;
            }
        }
    }
    return (tab);
}

void refresh_map(char **map, int *tab, int stor)
{
    for (int i = 0; i != stor * 2; i += 2) {
        if (map[tab[i]][tab[i + 1]] == ' ')
            map[tab[i]][tab[i + 1]] = 'O';
    }
}
