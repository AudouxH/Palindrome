/*
** EPITECH PROJECT, 2019
** header of main
** File description:
** prototype fonction
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

typedef struct dash
{
    int dash_p;
    int dash_b;
    int dash_n;
    int dash_imin;
    int dash_imax;
    int argv_p;
    int argv_b;
    int argv_n;
    int argv_imin;
    int argv_imax;
    int result;
} dash_t;

int check_error_dash(char *str);
int error_gestion(int ac, char **av);
void display_help(void);
void display_error(void);

dash_t init_struct(dash_t dasher);
int check_nbr(char *str);
dash_t check_dash(int ac, char **av);
void display_struct(dash_t dasher);

dash_t check_just_dash(int ac, char **av);
dash_t check_argument_of_dash(int ac, char **av);
dash_t check_argument_of_dash_two(int ac, char **av);
dash_t check_argument_of_dash_tree(int ac, char **av);

char *my_itoa(int nb, int choise);
char *rev_str(char *str);
void my_put_nbr(int nb);
int check_palindrome(int nb);

void display_dash_p(dash_t dasher);
void display_palindrome_p(int i, int y, int itter);

void display_dash_n(dash_t dasher);
int make_pldrm(int nb);
void display_palindrome(dash_t dasher, int itter);