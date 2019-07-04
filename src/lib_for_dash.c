/*
** EPITECH PROJECT, 2019
** lib for dash
** File description:
** library with importante fonction for palindrome project
*/

#include "../include/main.h"

int check_palindrome(int nb)
{
    char *nbr = my_itoa(nb, 0);
    char *rev_nbr = my_itoa(nb, 1);

    if (strcmp(nbr, rev_nbr) == 0) {
        free(nbr);
        free(rev_nbr);
        return (0);
    }
    else {
        free(nbr);
        free(rev_nbr);
        return (1);
    }
}

char *rev_str(char *str)
{
    char *swap = malloc(sizeof(char) * strlen(str));
    int y = strlen(str) - 1;

    for (int i = 0; str[i] != '\0'; i++) {
        swap[y] = str[i];
        y--;
    }
    swap[strlen(str)] = '\0';
    return (swap);
}

char *my_itoa(int nb, int choise)
{
    char *result = malloc(sizeof(char) * 15);
    char *rev_result;
    int i = 0;

    for (; nb > 0; i++) {
        result[i] = ((nb % 10) + 48);
        nb = nb / 10;
    }
    result[i] = '\0';
    if (choise == 1)
        return (result);
    else if (choise == 0) {
    rev_result = rev_str(result);
    free(result);
    return (rev_result);
    }
}
