#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format
 */


void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list var;

	va_start(var, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(var, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(var, double));
					break;
				case 's':
					str = va_arg(var, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;

				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	putchar(10);

	va_end(var);
}
