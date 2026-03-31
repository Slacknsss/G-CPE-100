/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** This function write all the digits in ascending order
*/
#include <unistd.h>
#include "my_putchar.h"

int my_print_digits(void) {

    for (char i = '0'; i <= '9'; i++)my_putchar(i);

    return 0;
}