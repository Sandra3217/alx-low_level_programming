#include "main.h"
/**
* square - assigns value to the integers
* @n: value of a given number
* @y: square root of a given number
* Return: square root of number
*/
int square(int n, int y)

{
	int result = y * y;
	if (result == n)
		return (y);
	if (result > n)
		return (-1);
	return (square(n, y + 1));
}

/**
* _sqrt_recursion - returns square root of a given number
* @n: value of a given number
* Return: square root of number
*/
int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	if (n < 2)
		return (n);
	return (square(n, 2));
}
