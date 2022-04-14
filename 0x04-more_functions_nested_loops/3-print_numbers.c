#include "main.h"
/**
 * print_numbers - print numbers
 * Return: 0
 */
void print_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
