#include "main.h"
/**
 * _strcmp - string
 * @s1: parameter
 * @s2: parameter 2
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
