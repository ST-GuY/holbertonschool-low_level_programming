#include <stdio.h>
#include <stdarg.h>
/**
 * 
 * 
 */
void print_all(const char * const format, ...);

va_list args;
va_start(args, format);

int i = 0;
while (format[i] != '\0')
