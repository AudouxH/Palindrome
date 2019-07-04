/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "../include/main.h"

int main(int ac, char **av)
{
    dash_t dasher;

    if (error_gestion(ac, av) == 84)
        return (84);
    dasher = check_dash(ac, av);
    if (dasher.dash_n == 1 && dasher.dash_p == 0)
        display_dash_n(dasher);
    else if (dasher.dash_p == 1 && dasher.dash_n == 0)
        display_dash_p(dasher);
    else
        display_error();
}