#include "main.h"

/**
* _print_rev_recursion - address of function
* *s: points us to the address of the first memory
* s: initial memory location
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0') 
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
