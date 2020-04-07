/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** Day08
*/

#include <stddef.h>
#include <stdlib.h>

int count_words(char const *str)
{
    int i = 0;
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            x++;
    return (x);
}

int len_word(char const *str)
{
    int i = 0;

    while ((str[i] != '\n') && (str[i] != '\0') && (str[i] != '\n'))
        i++;
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    char  **tab = malloc(sizeof(*tab) * ((count_words(str) + 1)));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            for (; str[i] == '\n'; i++, k++, j = 0);
        tab[k] = malloc(sizeof(**tab) * len_word(str));
        for (; str[i] != '\n' && str[i] != '\0'; j++, i++)
            tab[k][j] = str[i];
    }
    tab[k + 1] = NULL;
    return (tab);
    free(tab);
}
