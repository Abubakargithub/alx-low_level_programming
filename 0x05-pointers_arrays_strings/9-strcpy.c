#include "main.h"
/**
 * _strcpy - copy
 * @desk: parameter
 * @src: parameter
 * Return: desk
 */
char *_strcpy(char *desk, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		desk[j] = src[j];
	}
	desk[j] = '\0';
	return (desk);
}
