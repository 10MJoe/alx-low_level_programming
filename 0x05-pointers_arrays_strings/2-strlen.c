#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a pointer to int that will be updated
 * Return: 0
 */
int _strlen(char *s)
{
int d;

d = 0;

while (s[d] != '\0')
{
d++;
}
return (d);
}
