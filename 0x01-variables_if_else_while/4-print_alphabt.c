#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Display the state of a number (positive or negative)'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
