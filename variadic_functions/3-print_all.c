#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints a char
 * @list: list of arguments
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an int
 * @list: list of arguments
 */

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: list of arguments
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: list of arguments
 */

void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *separator = "";
	va_list list;

	type_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{'\0', NULL}
	};
	i = 0;
	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (format[i] == *types[j].type)
			{
				printf("%s", separator);
				types[j].f(list);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(list);
}
