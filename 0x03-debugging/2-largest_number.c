#include "main.h"
/**
 * largest_number - print large number
 * @a: parameter
 * @b: second parameter
 * @c: third parameter
 * Return: 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	} else if (b >= a && b >= c)
	{
		largest = b;
	} else
	{
		largest = c;
	}

	return (largest);
}
