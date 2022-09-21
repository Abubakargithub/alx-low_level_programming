#include "main.h"
/**
 * _strncpy - copies string
 * @dest: parameter
 * @src: source
 * @n: amount
 * Return: value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
