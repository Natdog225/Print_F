#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);

int _printf(const char *format, ...);

/*Prototypes for helpers that will do each %s, %c.*/
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_r(va_list args);

#endif /* MAIN_H */
