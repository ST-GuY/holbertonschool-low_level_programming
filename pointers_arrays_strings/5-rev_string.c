#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Pointeur vers la chaîne à inverser
 *
 * Cette fonction échange les caractères de la chaîne en place,
 * du début vers la fin, pour obtenir la version inversée de la chaîne.
 */

void rev_string(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;
	char tmp;

	while (left < right)
	{
		tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;

		left++;
		right--;
	}
	
}
