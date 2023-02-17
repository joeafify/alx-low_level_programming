#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0
 */
int main(void)
{
	int number;
	long int longNumber;
	long long int longLongNumber;
	char character;
	float floatNumber;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(number));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longNumber));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongNumber));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatNumber));
	return (0);
}
