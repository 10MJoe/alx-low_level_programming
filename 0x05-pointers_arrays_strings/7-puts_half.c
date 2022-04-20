#include "main.h"
/**
 * puts-half - prints every other character of a string
 * @str: A pionter to an int that will be changed
 * Return: 0
 */
void puts_half(char *str)
{
int b, last;
b = 0;
while (str[b] != '\0')
{
b++;
}

last = (b + 1) / 2;
for
(b = last;
str[b];
b++)
{
_putchar(str[b]);
}
}
