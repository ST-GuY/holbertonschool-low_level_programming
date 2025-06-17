#include "main.h"
#include <unistd.h>
#include <stdio.h>



void print_alphabet(void)
{
	int al;
	for (al = 'a'; al <= 'z'; al++)
	_putchar(al);
	_putchar('\n');
}