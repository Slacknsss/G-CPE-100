/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** Write a function that displays either N if
** the integer passed as parameter is negative or P,
** if positive or null
*/
#include <unistd.h>
#include "../lib/my_putchar.h"

int my_isneg(int n){
    if (n < 0)
    my_putchar('N');
    else
    my_putchar('P');

    return 0;
}