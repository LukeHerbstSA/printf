Modular Printf (Only handles strings and chars)
Types can be added via building the handler in the file "type_handlers.c" and adding that function name to the dictionary at the beginning of type choosers in the "mainfunc.c" file.
Every type handler function returns the len of characters printed to the caller function in mainfunc.c.
