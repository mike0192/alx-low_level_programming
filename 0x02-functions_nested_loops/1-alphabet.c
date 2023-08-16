#include "main.h"

/**
 * main - entry point
 * Description: prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char letter;

for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
