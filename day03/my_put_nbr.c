/*
** EPITECH PROJECT, 2026
** Piscine_C
** File description:
** la fonciton doit pouvoir afficher n'importe quelle entier (in)
*/
#include <unistd.h>
#include "../../lib/my_putchar.h"

int my_put_nbr ( int nb ) {
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        my_put_nbr(147483648);
        return 0;
    }
    if (nb < 0){
    my_putchar('-');
    my_put_nbr(-nb);
    } else if (nb < 10)
        my_putchar(nb + '0');
    else {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    return 0;
}
