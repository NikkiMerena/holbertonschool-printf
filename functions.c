#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* set_decimal- function that returns an int to signed decimal
* @valist: arguments passed
* Return: length of integers
*/

int set_decimal(va_list valist)
{
	int i;

	i = va_arg(valist, int);
	return (length_of_integer(i));
}

/**
* length_of_integer - function that returns an int to signed decimal
* @n: integer
* Return: length of the integer
*/

int length_of_integer(int n)
{
	if (n < 0)
	{
		return (1 + length_of_integer(-n));
	}
	else if (n < 10)
	{
		return (1);
	}
	else
	{
		return (1 + length_of_integer(n / 10));
	}
}

/**
* print_percent - Prints a percent symbol
* @valist: list of arguments
* Return: Will return the amount of characters printed.
*/

int print_percent(__attribute__((unused))va_list valist)
{
	_putchar('%');
	return (1);
}

/**
* set_string - specificer s
* @valist: valist
* Return: total characters
*/

int set_string(va_list valist)
{
	int i;
	char *s;

	s = va_arg(valist, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}

/**
* set_char - specificer c
* @valist: valist
* Return: void
*/

int set_char(va_list valist)
{
	char s;

	s = va_arg(valist, int);

	if (s == '\0')
	{
		return (0);
	}

	_putchar(s);

	return (1);
}
