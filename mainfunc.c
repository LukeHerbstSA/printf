#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include "type_handlers.c"

/**
	* _printf - int func
	* Description: prints passed string with formatted specs
	* @format: passed string with formatting
	* Return: return num chars printed
	*/
int _printf(const char *format, ...)
{
	va_list printer;
	int i;
	int num_chars;

	if (format == NULL)
		return (1);
	va_start(printer, format); /* last defined parameter is format but surely number of args should be passed here? va_start might have to take *format as a second arg*/
	num_chars = 0;
	for (i = 0; format[i] != '\0'; i++) /* this will pass args into a new loop j everytime it comes across a type specifier */
	{
		if (format[i] == '%')
		{
			num_chars += type_chooser(format[i + 1], printer);
		}
		else
			putchar(format[i]);
	}
	num_chars += i;
	va_end(printer);
	return (num_chars);
}

/**
	* type_handler - int function
	* Description: putchars every element of passed additional args
	* @type: passed pointer to type specifier
	* @printer: passed va_list to iterate over variadic parameters in _printf
	* Return: num chars printed (-1 to account for incrementing in _printf func)
	*/

int type_chooser(char type, va_list printer)
{
	int (*func_caller)(va_list);
	int len;
	int i; /* use this function to iterate over struct func_ptrs that checks if format spec matches any formats the dictionary, returning a pointer to one of the functions in type_handlers.c */
	funct_ptrs func_fetcher[] = {
		{"c", c_handler},
		{"s", s_handler},
		{NULL, NULL}
	};

	while (func_fetcher[i].type != NULL)
	{
		if (func_fetcher[i].type == type)
		{
			func_caller = func_fetcher[i].func_ptr;
			break;
		}
		i++;
	}
	len = func_caller(va_list printer);
	return (len - 1); /* minue one to account for the extra increment in the _printf function*/
}
