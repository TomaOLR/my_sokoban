/*
** EPITECH PROJECT, 2019
** sokoban.c
** File description:
** Thomas Olry's sokoban.c made the 11/25/2019
*/

#include "sokoban.h"
#include <stdio.h>

int is_file(char *file)
{
    struct stat dir;
    stat(file, &dir);
    return (S_ISREG(dir.st_mode));
}

char *open_map(char *map)
{
    struct stat size;
    char *buffer;
    int fd = open(map, O_RDONLY);

    stat(map, &size);
    buffer = malloc(sizeof(char) * size.st_size);
    read(fd, buffer, size.st_size);
    return (buffer);
}

void print_tab(char **tab)
{
    int y = 0;

    for (int i = 0; tab[i] != NULL; i++, y++)
        mvprintw(LINES / 2 + y, (COLS / 2) - my_strlen(tab[i]), tab[i]);
}

void the_sokoban(int x, char **map)
{
    erase();
    print_tab(map);
    x = moving(getch(), map, x);
}

int sokoban(char **map)
{
    int x = 0;
    int stor = checking(map, 'O');
    int *tab = get_storage(map);

    initscr();
    curs_set(FALSE);
    clear();
    while (1) {
        the_sokoban(x, map);
        refresh_map(map, tab, stor);
    }
    endwin();
    return (EXIT_SUCCESS);
}
