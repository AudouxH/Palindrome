/*
** EPITECH PROJECT, 2019
** check_dash
** File description:
** check all dash for filling struct
*/

#include "../include/main.h"

dash_t check_just_dash(int ac, char **av)
{
    dash_t dasher;

    dasher = init_struct(dasher);
    for (int i = 1; i < ac; i++) {
        if (strcmp(av[i], "-n") == 0 || strcmp(av[i], "number") == 0)
            dasher.dash_n = 1;
        if (strcmp(av[i], "-p") == 0 || strcmp(av[i], "palindrome") == 0)
            dasher.dash_p = 1;
        if (strcmp(av[i], "-b") == 0 || strcmp(av[i], "base") == 0)
            dasher.dash_b = 1;
        if (strcmp(av[i], "-imin") == 0)
            dasher.dash_imin = 1;
        if (strcmp(av[i], "-imax") == 0)
            dasher.dash_imax = 1;
    }
    return (dasher);
}

dash_t check_argument_of_dash(int ac, char **av)
{
    dash_t dasher;

    for (int i = 1; i < ac - 1; i++) {
        if (strcmp(av[i], "-n") == 0 || strcmp(av[i], "number") == 0) {
            if (check_nbr(av[i + 1]) == 0)
                dasher.argv_n = atoi(av[i + 1]);
            else
                display_error();
        }
        if (strcmp(av[i], "-b") == 0 || strcmp(av[i], "base") == 0) {
            if (check_nbr(av[i + 1]) == 0 && atoi(av[i + 1]) < 11)
                dasher.argv_b = atoi(av[i + 1]);
            else
                display_error();
        }
    }
    return (dasher);
}

dash_t check_argument_of_dash_two(int ac, char **av)
{
    dash_t dasher;

    for (int i = 1; i < ac - 1; i++) {
        if (strcmp(av[i], "-imin") == 0) {
            if (check_nbr(av[i + 1]) == 0)
                dasher.argv_imin = atoi(av[i + 1]);
            else
                display_error();
        }
        if (strcmp(av[i], "-imax") == 0) {
            if (check_nbr(av[i + 1]) == 0)
                dasher.argv_imax = atoi(av[i + 1]);
            else
                display_error();
        }
    }
    if (dasher.argv_imin > dasher.argv_imax)
        display_error();
    return (dasher);
}

dash_t check_argument_of_dash_tree(int ac, char **av)
{
    dash_t dasher;

    for (int i = 1; i < ac - 1; i++) {
        if (strcmp(av[i], "-p") == 0 || strcmp(av[i], "palindrome") == 0) {
            if (check_nbr(av[i + 1]) == 0)
                dasher.argv_p = atoi(av[i + 1]);
            else
                display_error();
        }
    }
    return (dasher);
}
