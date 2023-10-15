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
	char *string_arg;

	num_args == 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
			num_args++;
		i++;
	}
	j = 0;
	for (i = 0; format[i] != '\0', i++) /* this will pass args into a new loop j everytime it comes across a type specifier */
	{
		if (format[i] == '%')
		{
			string_arg = &(type_handler(format[i + 1]));
		}
	}
}
