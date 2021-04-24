/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Day06
*/

void my_putchar(char c);

int my_strlen(char const *str);

void create_new_str(char *str, int i, int j)
{
    while (str[i] != '\0') {
        str[j] = str[i];
        j++;
        i++;
    }
    str[j] = '\0';
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (j != my_strlen(to_find)) {
        if (str[i] == to_find[j]) {
            j++;
        } else if (str[i] != to_find[j] && j != my_strlen(to_find)) {
            j = 0;
        }
        i++;
    }
    j =	0;
    i =	i - my_strlen(to_find);
    create_new_str(str, i, j);
    return (str);
}
