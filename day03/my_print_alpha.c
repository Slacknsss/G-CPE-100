/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function write all the alphabet in order
*/
#include <unistd.h>
#include "../../lib/my_putchar.h"

int my_print_alpha(void) {
char i;
    for (i = 'a'; i <= 'z'; i++)my_putchar(i);

    return 0;
}
