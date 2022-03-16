#include "main.h"
/**
 * prints all natural numbers from n to 98
 *
 * Return: 0 Always
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; n > 97; i--)
{
	printf"(%d", i);
	if (i != 98)
	{
		printf(", ");
	}
}
}
else
{
for (i = n; i < 99; i++)
{
	printf"(%d", i);
	if (i != 98)
	{
		printf(", ");
	}
}
}
printf("\n");
}
