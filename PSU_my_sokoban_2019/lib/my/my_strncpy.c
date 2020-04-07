/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** Day06
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (n > my_strlen(src)) {
        while (src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        return (dest);
    }
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
