/*
** EPITECH PROJECT, 2019
** dash_p
** File description:
** make dash_p
*/

#include "../include/main.h"

void display_palindrome_p(int i, int y, int itter)
{
    printf("%d leads to %d", i, y);
    printf(" in %d iteration(s) in base 10\n", itter);
}

void display_dash_p(dash_t dasher)
{
    int itter = 0;
    int y = 1;

    if (check_palindrome(dasher.argv_p) != 0)
        write(1, "no solution\n", 12);
    for (int i = 0; i <= dasher.argv_p; i++) {
        y = i;
        while (y < dasher.argv_p && itter <= dasher.argv_imax) {
            y = make_pldrm(y);
            itter++;
        }
        if (check_palindrome(y) == 0 && y == dasher.argv_p)
            if ((itter <= dasher.argv_imax) && (itter >= dasher.argv_imin)) {
                dasher.result++;
                display_palindrome_p(i, y, itter);
            }
        itter = 0;
    }
    if (dasher.result == 0)
        write(1, "no solution\n", 12);
}