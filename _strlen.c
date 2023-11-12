#include "main.h"
/**
 *_strlen - returns the length of a string
 *@str: a string pointer
 *return length
 */
int _strlenc(const char* str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return length;
}
/**
 *_strlen -returns the length of a string
 *@str: a string of pointer needed to count it's length
 *return length
 */
int _strlen(char* str)
{
	int length = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return length;
}
