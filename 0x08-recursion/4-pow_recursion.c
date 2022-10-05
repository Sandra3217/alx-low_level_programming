#include "main.h"
/**
* _pow_recursion - returns the value of x raised to power y
* @x: value of the first int
* @y: power of value
* Return: the result of the multiplication
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
