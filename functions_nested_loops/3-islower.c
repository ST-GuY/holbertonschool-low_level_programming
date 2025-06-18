#include <ctype.h>
#include "main.h"
#include <unistd.h>

/**
 * _islower verifi si il y as une majuscule
 * return 1 si vrai
 * return 0 sinon
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
