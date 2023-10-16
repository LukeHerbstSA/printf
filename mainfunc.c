#include <stdarg.h>
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
	int num_args;
	char letter;
	char *string_arg;

	num_args == 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%') /* this counters format specifiers so I can find out the num of args passed in, but I must exit the program if too little args are passed with to many format specifiers? */
			num_args++;
		i++;
	}
	va_start(printer, num_args); /* last defined parameter is format but surely number of args should be passed here? */
	j = 0;
	for (i = 0; format[i] != '\0', i++) /* this will pass args into a new loop j everytime it comes across a type specifier */
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				string_arg = &(va_arg(printer, char));
			if (format[i + 1] == 's')
				string_arg = &(va_arg(printer, char *));
			for (j = 0; j < sizeof(string_arg); j++)
			{
				putchar(string_arg[0]);
			}
		}
		if (format[i] == '\n')
			putchar('\n');
	}
}
