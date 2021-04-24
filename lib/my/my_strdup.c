/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** Day08
*/

#include <stdlib.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *new_str = malloc(sizeof(char) * my_strlen(src));

    if (new_str == NULL)
        return (NULL);
    for (int i = 0; src[i] != '\0'; i++) {
        new_str[i] = src[i];
    }
    return (new_str);
    free(new_str);
}
