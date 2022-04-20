#include "main.h"
/**
 * print_rev - print a string in reverse other
 * @s: is a pointer to an integer that will be changed.
 * Return: 0
 */
void print_rev(char *s)
{
int b;
b = 0;

while (s[b] != '\0')
{
b++;
}

for
(b = b -1;
b >= 0;
b--)
{
_putchar(s[i]);
}
