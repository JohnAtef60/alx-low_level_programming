#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(li));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(lli));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
