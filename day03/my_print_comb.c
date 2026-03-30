/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function display:
** -ascending order
** -all the numbers composed by three differente Digits
** -and only the smallest one must be display (021 -> no :012 yes)
*/
#include <unistd.h>
#include "../../lib/my_putchar.h"

int my_print_comb(void) {
char i ;
char j ;
char k ;

    for (i = 0;i < 8;i++){
        for (j = i+1;j < 9;j++){
            for (k = j+1; k < 10; k++){
                my_putchar(i %10 + '0');
                my_putchar(j %10 + '0');
                my_putchar(k %10 + '0');
                if (!(i == 7 && j == 8 && k == 9)){
                    my_putchar((char)',');
                    my_putchar(' ');
                }
            }
        }
    }
    return 0;
}