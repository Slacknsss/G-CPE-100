/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** Tests for my_put_nbr
*/
#include "../../../lib/my_putchar.h"

int my_put_nbr(int nb);

int main(void)
{
    my_put_nbr(0);
    my_put_nbr(42);
    my_put_nbr(-42);
    my_put_nbr(2147483647);
    my_put_nbr(-2147483648);
    return 0;
}