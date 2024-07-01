#include <unistd.h>

/**
 * _putchar - func that writes a single character to the output
 * @c: character that will print
 * 
 * Return: prints out the one character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
