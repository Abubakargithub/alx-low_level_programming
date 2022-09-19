#include "main.h"
/**
 * _strlen - finds and outputs lenght
 * @s: pointer to string
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
