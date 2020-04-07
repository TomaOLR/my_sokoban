/*
** EPITECH PROJECT, 2019
** sokoban.h
** File description:
** Thomas Olry's sokoban.h made the 11/25/2019
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 84
#define UP 65
#define DOWN 66
#define RIGHT 67
#define LEFT 68

#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int move_right(char **, int, int, int);
int move_left(char **, int, int, int);
int move_down(char **, int, int, int);
int move_up(char **, int, int, int);
int moving(int, char **, int);

int moving_right(char **, int, int, int);
int moving_left(char **, int, int, int);
int moving_up(char **, int, int, int);
int moving_down(char **, int, int, int);

int is_file(char *);
char *open_map(char *);
void print_tab(char **);
void the_sokoban(int, char **);
int sokoban(char **);

int bad_character(char **);
int handling_error(char **);

int checking(char **, char);
int *get_storage(char **);
void refresh_map(char **, int *, int);

int my_strlen(char const *);
int my_putstr(char const *);
char **my_str_to_word_array(char const *);
int my_strcmp(char const *, char const *);
void my_putchar(char);

#endif /* SOKOBAN_H_ */
