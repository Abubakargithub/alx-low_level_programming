#include "main.h"
/**
 * _islower - this is a function to check wether the char is lower case
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
