/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Day06
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int res1 = 0;
    int res2 = 0;

    if (s1 == s2)
        return (0);
    for (int i = 0; s1[i] != '\0'; i++) {
        res1 = res1 + s1[i];
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        res2 = res2 + s2[i];
    }
    if (res1 < res2)
        return (-1);
    else if (res1 > res2)
        return (1);
    return (0);
}
