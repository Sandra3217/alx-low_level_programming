#include "main.h"
/**
* _sqrt_recursion: solves square root of a number
* @n: Given number
* @y: square root
* Return: square root of number
*/
int square(int n, int y)
{
	int result = y * y;
	if (result == n)
		return(y);
	if (result > n)
		return( -1 );
	return square (n, y + 1);
}
int _sqrt_recursion(int n)
{
	if ( n < 2)
		return (n);
	return (square(n, 2));


}
