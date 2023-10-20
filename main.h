#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
	* struct type_ptr - used to access ptr for relevant function for that format
	* @type: passed char that will act as key to access func_ptr
	* @func_ptr: func ptr to any one of the functions in type_handlers.c
	*/

typedef struct type_ptr
{
	char type;
	int (*func_ptr)(va_list printer);
} func_ptrs;
int _printf(const char *format, ...);
int c_handler(va_list printer);
int s_handler(va_list printer);
int type_chooser(char type, va_list printer);

#endif
