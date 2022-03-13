#include <stdio.h>
/**
 * main - Entry level
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int i;
for (i = 48 ; i <= 57 ; i++)
{
putchar(i);

if (i == 57)
{
break;
}

putchar(',');

putchar(' ');
}
return (0);
}
