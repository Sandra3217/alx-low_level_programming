#include "main.h"
/**
* factorial - multiplies two digits
* @n: first digit in the multiplication
* Return: the result of the multiplication
*/
int factorial(int n)
{
	if (n < 0)
		return ( -1 );
	if (n == 0)
		return (1);
	return (n * factorial (n-1));


}
