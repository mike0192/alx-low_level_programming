#include "function_pointer.h"
#include <stdio.h>
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
