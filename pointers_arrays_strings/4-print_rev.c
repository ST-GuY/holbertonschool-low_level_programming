#include <stdio.h>
#include <string.h>

/**
 * rev - Reverses a string in place.
 * @s: The string to reverse.
 */

void print_rev(char *s)
{
    int l = 0;
    int r = strlen(s) - 1;
    char t;

    while (l < r)
    {
        t = s[l];
        s[l] = s[r];
        s[r] = t;

        l++;
        r--;
    }
}
