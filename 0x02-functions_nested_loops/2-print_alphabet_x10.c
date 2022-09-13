#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

		count++;
		_putchar('\n');
	}

}
