#include "main.h"
#include <stdio.h>

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)

		last_digit = -last_digit;

	printf("%d\n", last_digit);

	return last_digit;
}
