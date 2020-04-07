/*
** EPITECH PROJECT, 2019
** strcat.c
** File description:
** Day07
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    int i = 0;

    dest[len_dest + len_src] = '\0';
    while (i != len_src) {
        dest[len_dest] = src[i];
        i++;
        len_dest++;
    }
    return (dest);
}
