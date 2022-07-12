#ifndef _MAIN_H_
#define _HOLBERTON_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
* struct op - flag / function object
* @c: flag
* @f: function
*/

typedef struct op
{
	char *c;

	int (*f)(va_list);

} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
