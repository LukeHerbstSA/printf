#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

<<<<<<< HEAD
int _putchar(char c);
=======
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

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
int c_handler(va_list printer);
int s_handler(va_list printer);
>>>>>>> 14b27341cb084c27c1f668d7508c5c85a34d3eff
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_int(va_list args);
int _print_str(va_list args);
int (*_selec_func(char c))(va_list);

#endif
