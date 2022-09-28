#include "main.h"
/**
 * _sqrt_recur - helper
 * @n: parameter
 * @x: parameter
 * Return: output
 */
int _sqrt_recur(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recur(n, x + 1));
}
/**
 * _sqrt_recursion - function
 * @n: num
 * Return: sqr
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(b, 0));
}
