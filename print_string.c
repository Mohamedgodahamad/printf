#include "main.h"
#include <string.h>
/**
 *print_string - prints string
 *@args: argument
 *Return: the length of the string
 */
int print_string(va_list args)
{
	int i, length;
	char* str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return length;
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return length;
	}
}
