/*
** EPITECH PROJECT, 2019
** error_help
** File description:
** gestion error and display help
*/

#include "../include/main.h"

int check_error_dash(char *str)
{
    if (str[0] == '-') {
        if (str[1] == 'p' || str[1] == 'n'
        || str[1] == 'b' || str[1] == 'h') {
            if (strlen(str) > 2)
                return (1);
            return (0);
        }
        else if ((strlen(str) > 2 && strcmp(str, "-imin") == 0) ||
        strlen(str) > 2 && strcmp(str, "-imax") == 0)
            return (0);
        else
            return (1);
    }
}

int error_gestion(int ac, char **av)
{
    if (ac > 1) {
        if (strcmp("-h", av[1]) == 0)
            display_help();
        else if (ac %2 != 1)
            display_error();
        for (int i = 1; i < ac; i++) {
            if (check_error_dash(av[i]) == 1)
                display_error();
        }
    }
    else
        return (84);
}

void display_error(void)
{
    printf("invalid argument\n");
    exit(84);
}

void display_help(void)
{
    printf("USAGE\n");
    printf("      ./palindrome -n number -p palindrome [-b base]");
    printf(" [-imin i] [-imax i]\n\n");
    printf("DESCRIPTION\n");
    printf("      -n n      integer to be transformed (> = 0)\n");
    printf("      -p pal    palindromic number to be obtained ");
    printf("(incompatible with the -n option) (>=0)\n                ");
    printf("if defined, all fitting value of n will be output\n");
    printf("      -b base   base in which the procedure will be ");
    printf("executed (1<b<=10) [def: 10]\n      -imin i   minimum ");
    printf("number of iterations, include (>=0) [def: 0]\n");
    printf("      -imax i   maximum number of iterations, ");
    printf("include (>=0) [def: 100]\n");
    exit(84);
}