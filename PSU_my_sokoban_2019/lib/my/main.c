/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Thomas Olry's main.c made the 11/25/2019
*/

char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);

void main(void)
{
    char *str = "lollol\nlolilol";
    char **array = my_str_to_word_array(str);

    my_show_word_array(array);
}
