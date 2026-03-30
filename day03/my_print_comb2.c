/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function display:
** -ascending order
** Write a function that displays, in ascending order,
** all the different combinations of two two-digit numbers
** (00 01, 00 02, 00 03, 00 04, 00 05,...,01 99, 02 03, ..., 98 99).
*/
#include <unistd.h>
#include "../../lib/my_putchar.h"

int  my_print_comb2(void) {
char i;
char j;
i = -1;

    while (i++ <= 98  ) {
        j = i;
        while (j++ < 99)
        {
            my_putchar((i/10) + '0');
            my_putchar((i%10) + '0');
            my_putchar(' ');
            my_putchar((j/10) + '0');
            my_putchar((j%10) + '0');
            if (!(i == 98 && j == 99)) {
                my_putchar((char)',');
                my_putchar(' ');
            }
        }
    }
    return 0;
}