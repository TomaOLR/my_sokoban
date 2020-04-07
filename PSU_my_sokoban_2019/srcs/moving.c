/*
** EPITECH PROJECT, 2019
** moving.c
** File description:
** Thomas Olry's moving.c made the 11/26/2019
*/

#include "sokoban.h"

int move_right(char **map, int i, int j, int x)
{
    if (map[i][j + 1] == ' ') {
        map[i][j + 1] = 'P';
        map[i][j] = ' ';
    }
    if (map[i][j + 1] == 'X' && map[i][j + 2] == ' ') {
        map[i][j] = ' ';
        map[i][j + 1] = 'P';
        map[i][j + 2] = 'X';
    }
    if (map[i][j + 1] == 'X' && map[i][j + 2] == 'O') {
        map[i][j] = ' ';
        map[i][j + 1] = 'P';
        map[i][j + 2] = 'X';
    }
    x = moving_right(map, i, j, x);
    return (x);
}

int move_left(char **map, int i, int j, int x)
{
    if (map[i][j - 1] == ' ') {
        map[i][j - 1] = 'P';
        map[i][j] = ' ';
    }
    if (map[i][j - 1] == 'X' && map[i][j - 2] == ' ') {
        map[i][j] = ' ';
        map[i][j - 1] = 'P';
        map[i][j - 2] = 'X';
    }
    if (map[i][j - 1] == 'X' && map[i][j - 2] == 'O') {
        map[i][j] = ' ';
        map[i][j - 1] = 'P';
        map[i][j - 2] = 'X';
    }
    x = moving_left(map, i, j, x);
    return (x);
}

int move_down(char **map, int i, int j, int x)
{
    if (map[i + 1][j] == ' ') {
        map[i + 1][j] = 'P';
        map[i][j] = ' ';
    }
    if (map[i + 1][j] == 'X' && map[i + 2][j] == ' ') {
        map[i][j] = ' ';
        map[i + 1][j] = 'P';
        map[i + 2][j] = 'X';
    }
    if (map[i + 1][j] == 'X' && map[i + 2][j] == 'O') {
        map[i][j] = ' ';
        map[i + 1][j] = 'P';
        map[i + 2][j] = 'X';
    }
    x = moving_down(map, i, j, x);
    return (x);
}

int move_up(char **map, int i, int j, int x)
{
    if (map[i - 1][j] == ' ') {
        map[i - 1][j] = 'P';
        map[i][j] = ' ';
    }
    if (map[i - 1][j] == 'X' && map[i - 2][j] == ' ') {
        map[i][j] = ' ';
        map[i - 1][j] = 'P';
        map[i - 2][j] = 'X';
    }
    if (map[i - 1][j] == 'X' && map[i - 2][j] == 'O') {
        map[i][j] = ' ';
        map[i - 1][j] = 'P';
        map[i - 2][j] = 'X';
    }
    x = moving_up(map, i, j, x);
    return (x);
}

int moving(int key, char **map, int x)
{
    int i = 0;
    int j = 0;

    for (; map[i][j] != 'P'; j++) {
        if (map[i][j] == '\n' || map[i][j] == '\0') {
            i++;
            j = 0;
        }
    }
    if (key == UP && map[i - 1][j] != '#')
        x = move_up(map, i, j, x);
    if (key == DOWN && map[i + 1][j] != '#')
        x = move_down(map, i, j, x);
    if (key == RIGHT && map[i][j + 1] != '#')
        x = move_right(map, i, j, x);
    if (key == LEFT && map[i][j - 1] != '#')
        x = move_left(map, i, j, x);
    return (x);
}
