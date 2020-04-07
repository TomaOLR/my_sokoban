/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int res1 = 0;
    int res2 = 0;

    for (int i = 0; i != n; i++) {
        res1 = res1 + s1[i];
    }
    for (int i = 0; i != n; i++) {
        res2 = res2 + s2[i];
    }
    if (res1 == res2)
        return (0);
    else if (res1 < res2)
        return (-1);
    else
        return (1);
}
