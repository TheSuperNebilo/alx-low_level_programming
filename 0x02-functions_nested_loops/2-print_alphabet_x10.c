#include "holberton.h"
/**
 * print_alphabet_x10 - reapshe 2-print_alphabet 10 times.
 * Return: Noting.
 */
void print_alphabet_x10(void)
{
	int i:
	char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n);
	}
}
