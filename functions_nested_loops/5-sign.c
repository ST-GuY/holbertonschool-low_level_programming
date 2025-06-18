#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - Affiche le signe d'un nombre.
 * @n: Le nombre dont le signe doit être affiché.
 *
 * Cette fonction affiche '+' si le nombre est positif,
 * '0' s’il est nul, et '-' s’il est négatif.
 * Elle retourne 1 si n est positif, 0 si n est nul, et -1 si n est négatif.
 *
 * Return: 1 si n > 0, 0 si n == 0, -1 si n < 0.
 */

int print_sign(int n) {
	if (n > 0) {
		_putchar('+');
		return (1);
	}
	else if (n == 0) {
		_putchar('0');
		return (0);
	}
	else {
		_putchar('-');
		return (-1);
	}
}
