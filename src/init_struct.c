/*
** EPITECH PROJECT, 2019
** init struct
** File description:
** init struct and display her
*/

#include "../include/main.h"

dash_t init_struct(dash_t dasher)
{
    dasher.dash_p = 0;
    dasher.dash_b = 0;
    dasher.dash_n = 0;
    dasher.dash_imin = 0;
    dasher.dash_imax = 0;
    dasher.argv_p = 0;
    dasher.argv_b = 10;
    dasher.argv_n = 0;
    dasher.argv_imin = 0;
    dasher.argv_imax = 10000;
    dasher.result = 0;
    return (dasher);
}

int check_nbr(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 48 || str[i] > 57)
            return (-1);
    nbr = atoi(str);
    if (nbr < 0)
        return (-1);
    else
        return (0);
}

dash_t check_dash(int ac, char **av)
{
    dash_t dasher;
    dasher = check_just_dash(ac, av);
    dasher = check_argument_of_dash(ac, av);
    dasher = check_argument_of_dash_two(ac, av);
    dasher = check_argument_of_dash_tree(ac, av);
    return (dasher);
}