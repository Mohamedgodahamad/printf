#include "main.h"
/**
 *_putchar - prints the character to stdout
 *@c: the character to be printed
 *Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
