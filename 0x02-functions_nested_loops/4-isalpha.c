#include "main.h"
/**
 * _isalpha - check is value is alphabet
 * @c: takes the inputs
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c >= 'A' && c >= 'Z')
		return (1);
	return (0);
}
