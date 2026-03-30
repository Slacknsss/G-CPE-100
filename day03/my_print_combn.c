/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function display:
** -ascending order
** Write a function that displays, in ascending order,
** all the different combinations of two two-digit numbers
** given by N 
*/
#include "../lib/my_putchar.h"

void helper(int n, int start, int *tab, int size) {
    if (n == 0 ) {
        int i = 0;
        while (i < size) {
            my_putchar(tab[i] + '0');
            i++;
        }
        if (!(tab[0] == 10 - size && tab[size - 1] == 9)) {
            my_putchar((char)',');
            my_putchar(' ');
        }
        return;
    }
    int i = start;
    while (i <= 9) {
        tab[size - n ] = i;
        helper(n - 1, i + 1, tab, size);
        i++;
    }
}

#include <stdlib.h>

int my_print_combn(int n)
{
    int tab[10];
    helper(n, 0, tab, n);
    return 0;
}
