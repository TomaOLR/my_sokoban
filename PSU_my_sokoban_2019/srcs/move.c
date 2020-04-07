/*
** EPITECH PROJECT, 2019
** move.c
** File description:
** Thomas Olry's move.c made the 11/28/2019
*/

int moving_right(char **map, int i, int j, int x)
{
    if (map[i][j + 1] == 'O') {
        map[i][j + 1] = 'P';
        map[i][j] = ' ';
        x += 1;
    }
    else if (x > 0) {
        map[i][j] = ' ';
        map[i][j + 1] = 'P';
        x = 0;
    }
    return (x);
}

int moving_left(char **map, int i, int j, int x)
{
    if (map[i][j - 1] == 'O') {
        map[i][j - 1] = 'P';
        map[i][j] = ' ';
        x += 1;
    }
    else if (x > 0) {
        map[i][j] = ' ';
        map[i][j - 1] = 'P';
        x = 0;
    }
    return (x);
}

int moving_down(char **map, int i, int j, int x)
{
    if (map[i + 1][j] == 'O') {
        map[i + 1][j] = 'P';
        map[i][j] = ' ';
        x += 1;
    }
    else if (x > 0) {
        map[i][j] = ' ';
        map[i + 1][j] = 'P';
        x = 0;
    }
    return (x);
}

int moving_up(char **map, int i, int j, int x)
{
    if (map[i - 1][j] == 'O') {
        map[i - 1][j] = 'P';
        map[i][j] = ' ';
        x += 1;
    }
    else if (x > 0) {
        map[i][j] = ' ';
        map[i - 1][j] = 'P';
        x = 0;
    }
    return (x);
}
