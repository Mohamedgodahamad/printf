#include "main.h"
/**
 *print_char - prints a char
 *@args: an argument 
 *return: the char printed
 */
int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return 1;
}
