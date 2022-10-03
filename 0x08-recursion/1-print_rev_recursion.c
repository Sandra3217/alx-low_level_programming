#include "main.h"

void _print_rev_recursion(char *s)
{
   if (*s != NULL) {

   _print_rev_recursion(start + 1);
   putchar(*s);
} 

}

