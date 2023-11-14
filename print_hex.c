#include "main.h"
/**
 *print_hex - prints an hexdecimal number
 *@args: arguments.
 *Return: counter
 */
int print_hex(va_list args)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tem = num;

	while(num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof (int));
	num = tem;

	for(i = 0; i < counter; i++)
	{
		array[i] = num % 16;
		num /= 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
