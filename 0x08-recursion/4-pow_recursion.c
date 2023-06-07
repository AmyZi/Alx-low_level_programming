#include "main.h"
/**
*_pow_recursion - this function returns the value of x raised to power y
*@x: param1
*@y: param2
*Return: result
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
