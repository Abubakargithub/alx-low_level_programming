#include "main.h"
/**
 * print_diagonal - function
 * @n: parameter 
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int k;
	int s;
	int j;

	k = '\\';
	s = ' ';
	for (i = 0; i < n; i++)
	{
		if (n > 1)
		{
			for (j = 0; j < i; j++)
			{

				_putchar(s);
			}
			_puchar(k);
			_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
