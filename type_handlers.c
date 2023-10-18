#include <stdio.h>
#include <stdarg.h>

/**
	* c_handler - int func
	* Description: putchars a char and returns the len as one
	* @printer: passed va_list arg
	* Return: Always one
	*/
int c_handler(va_list printer)
{
	char arg;

	arg = va_arg(printer, int);
	putchar(arg);
	return (1);
}

/*
	* s_handler - int func
	* Description: putchars string arg and returns len of string
	* @printer: passed va_list arg
	* Return: len of printed string
	*/
int s_handler(va_list printer)
{
	int i;
	char *string_arg;

	string_arg = va_arg(printer, char *);
	for (i = 0; string_arg[i] != '\0'; i++)
		putchar(string_arg[i]);
	return (i);
}
