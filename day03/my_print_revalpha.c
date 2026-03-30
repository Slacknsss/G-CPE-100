/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function write all the alphabet in descending order
*/
#include <unistd.h>
#include "../lib/my_putchar.h"

int my_print_revalpha(void) {
char i;
    for (i = 'z'; i >= 'a'; i--)my_putchar(i);

    return 0;
}