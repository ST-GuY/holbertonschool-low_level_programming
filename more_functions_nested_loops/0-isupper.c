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
        _putchar('_');
        _putchar('i');
        _putchar('s');
        _putchar('u');
        _putchar('p');
        _putchar('p');
        _putchar('e');
        _putchar('r');
        _putchar('(');
        _putchar(tests[i]);
        _putchar(')');
        _putchar(' ');
        _putchar('=');
        _putchar(' ');
        _putchar(_isupper(tests[i]) + '0');
        _putchar('\n');
    }

    return 0;
}

