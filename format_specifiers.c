#include "main.h"

/**
 * Checking for the s, c and %.
 */

/**handling the % */
int handle_char(va_list args)
{
	char c = va_arg(args, int); /*retrieves the character argument*/
	_putchar(c); /*prints the character*/
	return(1); /* returns the number of printed characters*/
}

/** handling the string s func */
