#include <stdio.h>
/**
 * main - cause an infinite
 * Return: 0
 */
int main(void)
{
	
	 int i;
	 
	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	/*
	 * i = 0;
	 */
	printf("Infinte loop avoided! \\o/\n");

	return (0);
}
