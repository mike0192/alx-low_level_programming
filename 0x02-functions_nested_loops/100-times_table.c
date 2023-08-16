#include "main.h"

/*
 * print_times_table - prints time table of n
 *
 * @n: takes number input
 */
void print_times_table(int n)
int pdx, mtx, nux;
if (n <= 15 && n >= 0)
{
for (nux = 0; nux <= n; nux++)
{
_putchar(48);
for (mtx = 1; mtx <= n; mtx++)
{
_putchar(',');
_putchar(' ');
pdx = nux * mtx;
if (pdx <= 9)
_putchar(' ');
if (pdx <= 99)
_putchar(' ');
if (pdx >= 100)
{
_putchar((pdx / 100) + 48);
_putchar((pdx / 10) % 10 + 48);
}
else if
_putchar((pdx <= 99) && pdx >= 10)
_putchar((pdx / 10) + 48);
_putchar((pdx % 10) + 48);
}
_putchar('\n');
}
}
