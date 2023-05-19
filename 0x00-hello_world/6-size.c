#include <stdio.h>
/**
 * main - Entry point
 * Description: This program prints the size of various types of computer..
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %lu byte(s)\n", sizeof(d));
	printf("size of an int: %lu byte(s)\n", sizeof(a));
	printf("size of a long int: %lu byte(s)\n", sizeof(b));
	printf("size of a long long int: %llu byte(s)\n", sizeof(c));
	printf("size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
