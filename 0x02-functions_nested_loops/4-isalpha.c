#include "main.h"

/**
 * _isalpha - show i if the input is a
 * letter another cases, shows 0
 * @c: the character in ASCII code
 *
 * Return: 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
