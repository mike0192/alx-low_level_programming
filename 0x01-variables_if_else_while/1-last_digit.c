#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0)); 
n = rand() - RAND_MAX / 2;

int lastDigit = n % 10;

putchar('L');
putchar('a');
putchar('s');
putchar('t');
putchar(' ');
putchar('d');
putchar('i');
putchar('g');
putchar('i');
putchar('t');
putchar(' ');
putchar('o');
putchar('f');
putchar(' ');
putchar(n + '0');
putchar(' ');
putchar('i');
putchar('s');
putchar(' ');

if (lastDigit > 5)
{
putchar('a');
putchar('n');
putchar('d');
putchar(' ');
putchar('i');
putchar('s');
putchar(' ');
putchar('g');
putchar('r');
putchar('e');
putchar('a');
putchar('t');
putchar('e');
putchar('r');
putchar(' ');
putchar('t');
putchar('h');
putchar('a');
putchar('n');
putchar(' ');
putchar('5');
putchar('\n');
}
else if (lastDigit == 0)
{
putchar('a');
putchar('n');
putchar('d');
putchar(' ');
putchar('i');
putchar('s');
putchar(' ');
putchar('0');
putchar('\n');
}
else
{
putchar('a');
putchar('n');
putchar('d');
putchar(' '); 
putchar('i');
putchar('s');
putchar(' ');
putchar('l');
putchar('e');
putchar('s');
putchar('s');
putchar(' ');
putchar('t');
putchar('h');
putchar('a');
putchar('n');
putchar(' ');
putchar('6');
putchar(' ');
putchar('a');
putchar('n');
putchar('d');
putchar(' ');
putchar('n');
putchar('o');
putchar('t');
putchar(' ');
putchar('0');
putchar('\n');
}

return (0);
}
