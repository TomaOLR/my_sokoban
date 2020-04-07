/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** Day06
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            i++;
        else
            return (0);
    }
    return (1);
}
