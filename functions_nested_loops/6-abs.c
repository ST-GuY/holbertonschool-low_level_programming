#include "main.h"
#include <stdlib.h>

/**
 * _abs - Returns the absolute value of an integer
 * @i: The integer whose absolute value is to be computed
 *
 * Return: The absolute value of the integer
 */

int _abs(int i)
{
	if (i < 0)
	return (-i);
	else
	return (i);
}
