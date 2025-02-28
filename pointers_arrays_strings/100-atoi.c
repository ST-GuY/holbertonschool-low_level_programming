#include "main.h"

/*
 * _atoi - Find digit in string
 * @s: string
 * Return: int
*/

int _atoi(char *s)
{
	int index = 0;
	unsigned int num = 0;
	int sign = 1;
	int ok = 0;

	while (s[index] == ' ')
	{
		index++;
	}

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}	
		if (s[index] >= '0' && s[index] <= '9')
		{
			num = num * 10 + (s[index] - '0');
			ok = 1;
		}
		else if (ok)
		{
		break;
		}
		index++;
	}

	if (!ok)
	{
		return (0);
	}

	return (num *sign);
}
