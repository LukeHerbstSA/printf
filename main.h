#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int type_handler(char type, va_list printer);
int c_handler(va_list printer);
int s_handler(va_list printer);
/**
	* type_ptr - struct used to access the relevant ptr for relevant function for that type
	* @type: passed char that will act as key to access func_ptr
	* @func_ptr: func ptr to any one of the functions in type_handlers.c
	*/
typedef struct type_ptr
{
	char *type;
	int (*func_ptr)(va_list printer);
} func_ptrs;

#endif
