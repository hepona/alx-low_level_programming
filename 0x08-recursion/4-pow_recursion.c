#include "main.h"

/**
 * _pow_recursion -> returns the value of x raised to the power of y
 * @x: integer
 * @y: integer
 * Return: if y<0 = -1, else the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x,x*(y*_pow_recursion(x*y-1)));
}