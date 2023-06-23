#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - sums up all the parameters
* @n: number of arguments
*
* Return: the sum of all parameters, or 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arguments;

if (n)
{
va_start(arguments, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
}
return (sum);
}
