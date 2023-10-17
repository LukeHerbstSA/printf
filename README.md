Various files and functions created to replicate the usage and output of the printf function.

Current tasks:
1: Have to create a struct in order to in order to return function pointer for type handling - but can also use loads of ifs statements in the type handler function in mainfunc.c
2: Have to make sure va_list variable is working on all steps in the script (va_start, va_arg etc)
3: Please don't delete any of what I've done so far, try working in type handler fuction: this function must be able to take an argument of format[i + 1] when format[i] == '%' - the idea is that each format specifier will call the correct fuction from type handler using -whatever letter was passed to determine the typpe (%d will handle int type in type handler, %s will handle string type from type handler)
4: I've already started on the type handling script in the _printf function_ as you can probably see, but the idea is i want something like that in the type handler function. you'll need to create a struct, I believe I left a framework in the header file
