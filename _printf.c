#include "main.h"
/**
 *_printf - prints a string and other types 
 *using some specifier
 *@format: format
 *return: printed char
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int printed_char = 0, printed = 0, all_printed;
	while(*format)
	{
		if(*format == '%')
		{
			format++;
			switch(*format)
			{
				case ('c'):
					_putchar(va_arg(args, int));
					break;
				case ('s'):
					print_String(va_arg(args, char*));
					break;
				case ('%'):
					print_37();
					break;
				default:
					_putchar('%');
					_putchar(*format);
					break;
			}
			printed_char++;
		}
		else
		{
			_putchar('%');
			_putchar(*format);
			printed += 2;
		}
		format++;
	}
	all_printed = printed + printed_char;
	va_end(args);
	return all_printed;
}
