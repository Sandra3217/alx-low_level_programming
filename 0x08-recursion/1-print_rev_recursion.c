#include "main.h"
/**
* _print_rev_recursion - prints string in reverse
* @*s: points us to the address of the first memory
* Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
