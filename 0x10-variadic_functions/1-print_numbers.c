#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_numbers - print numbers
* @separator: separator
* @n: variable
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s\n", separator);
	}
	printf("\n");

	va_end(args);
}
