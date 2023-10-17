#include <stdarg.h>
#include <string.h>
#include "main.h"

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
	char letter;
	char *string_arg;
	int num_chars;

	va_start(printer, format); /* last defined parameter is format but surely number of args should be passed here? va_start might have to take *format as a second arg*/
	j = 0;
	num_chars = 0;
	for (i = 0; format[i] != '\0', i++) /* this will pass args into a new loop j everytime it comes across a type specifier */
	{
		if (format[i] == '%')
		{
			num_chars += type_handler(&(format[i + 1]), printer);
		}
		else
			putchar(format[i]);
	}
	num_chars += i;
	va_end(printer);
	return (i);

}

int *type_handler(*type, printer)
{
	if (*type == 'c')
  		string_arg = &(va_arg(printer, int)); /* va_arg takes int because single chars are promoted to int, but string_arg can still point to this 'char' via implicit conversion (must be tested)*/
	if (*type == 's')
 		string_arg = &(va_arg(printer, char *));
	for (j = 0; j < strlen(string_arg); j++)
		putchar(string_arg[j]); /* while j < length of string string_arg, putchar that element*/
	return (j - 1); /* here we return the number of chars printed (minus one here because var i will increment one anyways if the string is one char, e.g when type_handler is done being called, i increments even though it never printed, loop j printed)*/
}
