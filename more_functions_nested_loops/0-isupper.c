#include <stdio.h>

/**
 * _isupper - Vérifie si un caractère est en majuscule.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c est une majuscule, 0 sinon.
 */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

int main()
{
    char tests[] = {'A', 'z', 'G', '5'};
    int i;

    for (i = 0; i < 4; i++) {
        putchar('_');
        putchar('i');
        putchar('s');
        putchar('u');
        putchar('p');
        putchar('p');
        putchar('e');
        putchar('r');
        putchar('(');
        putchar(tests[i]);
        putchar(')');
        putchar(' ');
        putchar('=');
        putchar(' ');
        putchar(_isupper(tests[i]) + '0');
        putchar('\n');
    }

    return 0;
}

