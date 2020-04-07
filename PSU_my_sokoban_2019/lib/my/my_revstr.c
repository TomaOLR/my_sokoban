/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** Day06
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char box;

    while (j < i) {
        box = str[i];
        str[i] = str[j];
        str[j] = box;
        i--;
        j++;
    }
    return (str);
}
