#include <stdio.h>

/**
 * _isupper - Vérifie si un caractère est en majuscule.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c est une majuscule, 0 sinon.
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int main()
{
    char test1 = 'A';
    char test2 = 'z';
    char test3 = 'G';
    char test4 = '5';

    printf("_isupper('%c') = %d\n", test1, _isupper(test1));
    printf("_isupper('%c') = %d\n", test2, _isupper(test2));
    printf("_isupper('%c') = %d\n", test3, _isupper(test3));
    printf("_isupper('%c') = %d\n", test4, _isupper(test4));

    return 0;
}

