#include "3-calc.h"

/**
 * op_add - Additionne deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Soustrait deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: la différence de a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplie deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divise deux entiers
 * @a: dividende
 * @b: diviseur
 * Return: le quotient de a et b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulo de deux entiers
 * @a: premier entier
 * @b: deuxième entier
 * Return: le reste de a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
