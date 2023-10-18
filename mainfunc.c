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
	num_chars = 0;
	va_start(printer, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			num_chars += type_chooser(format[i + 1], printer);
			i++;
		}
		else
			putchar(format[i]);
	}
	num_chars += i;
	va_end(printer);
	return (num_chars);
}

/**
	* type_chooser - int function
	* Description: putchars every element of passed additional args
	* @type: passed pointer to type specifier
	* @printer: passed va_list to iterate over variadic parameters in _printf
	* Return: num chars printed (-1 to account for incrementing in _printf func)
	*/

int type_chooser(char type, va_list printer)
{
	int (*func_caller)(va_list);
	int len;
	int i;
	func_ptrs func_fetcher[] = {
		{'c', c_handler},
		{'s', s_handler}
	};
	i = 0;
	while (i < 2)
	{
		if (func_fetcher[i].type == type)
		{
			func_caller = func_fetcher[i].func_ptr;
			break;
		}
		i++;
	}
	len = func_caller(printer);
	return (len - 1); /* minue one for the extra increment in _printf */
}
