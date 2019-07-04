/*
** EPITECH PROJECT, 2019
** dash_n
** File description:
** make dash_n
*/

#include "../include/main.h"

void display_palindrome(dash_t dasher, int itter)
{
    printf("%d leads to %d", dasher.argv_n, dasher.result);
    printf(" in %d iteration(s) in base %d\n", itter, dasher.argv_b);
}

int make_pldrm(int nb)
{
    int result = 0;
    char *itoa_str = my_itoa(nb, 0);
    char *str_rev = rev_str(itoa_str);
    int nb_rev = atoi(str_rev);

    result = (nb + nb_rev);
    free(str_rev);
    free(itoa_str);
    return (result);
}

void display_other_base(dash_t dasher)
{
    return;
}

void display_dash_n(dash_t dasher)
{
    int itter = 0;

    if (dasher.dash_b == 0 || dasher.argv_b == 10) {
        if (check_palindrome(dasher.argv_n) == 0) {
            dasher.result = dasher.argv_n;
            display_palindrome(dasher, itter);
        }
        else {
            dasher.result = dasher.argv_n;
            while (check_palindrome(dasher.result) != 0) {
                dasher.result = make_pldrm(dasher.result);
                itter++;
            }
            display_palindrome(dasher, itter);
        }
    }
    else
        display_other_base(dasher);
}