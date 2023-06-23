#include "variadic_functions.h"

/**
  *print_strings - prints number using a seperator
  *@separator: The string separator
  *@n: numbers
  *@...: the list of numbers
  *Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(valist, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(valist);
}
