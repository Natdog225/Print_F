<a href="https://imgflip.com/i/8vmjky"><img src="https://i.imgflip.com/8vmjky.jpg" title="made at imgflip.com"/></a></div>

# Custom `_printf` Function

This project implements a simplified version of the standard `printf` function in C. The custom `_printf` function provides basic formatted output capabilities and handles the following conversion specifiers: `%c`, `%s`, `%d`, and `%%`.

## Table of Contents

- [Overview](#overview)
- [Requirements](#requirements)
- [Project Structure](#project-structure)
- [Usage](#usage)
- [Tasks](#Tasks)
- [Prototypes](#Prototypes)
- [Authors](#Authors)

## Overview

The `_printf` function is a custom implementation of the C standard library function `printf`. It allows you to print formatted output to the standard output stream (stdout). This project is part of a C programming course and aims to demonstrate an understanding of variadic functions and formatted output.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called `main.h`
- All header files should be include guarded
- Authorized functions and macros: `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`

## Project Structure

The project consists of the following files:

- `main.h`: Header file containing function prototypes and necessary includes.
- `_printf.c`: Contains the main `_printf` function which handles the variable arguments and directs them to the appropriate handler functions.
- `format_specifiers.c`: Contains helper functions for handling specific format specifiers (`%c`, `%s`, `%d`).
- `utils.c`: Contains the `_putchar` function used to write characters to the standard output.
- `README.md`: Documentation for the project.
- `test/main.c`: Test file to verify the implementation of the `_printf` function.

## Usage

To use the custom `_printf` function, follow these steps:

1. Include the `main.h` header file in your source file.
2. Compile your source file with the provided `_printf` implementation files.
3. Call the `_printf` function in your code as you would with the standard `printf`.

## Tasks

## Prototypes

	int _putchar(char c);

	int _printf(const char *format, ...);

	int handle_char(va_list args);
	
	int handle_string(va_list args);
	
	int handle_int(va_list args);
	
	int handle_r(va_list args);


## Authors

- John Wilson
- Nathan Wilson