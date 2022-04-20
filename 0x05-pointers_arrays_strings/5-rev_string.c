#include "main.h"
/**
 * rev_string - print reverse string
 * @s: a pointer to an integer that will be updated
 * Return: 0
 */
void rev_string(char *s)
{
char *start_c, *end_c, c;
int a, count;
int length = 0;
for
(a = 0;
s[a];
a++)
{
length++;
}
count = length;

start_c = s;
end_c = s;

for
(a = 0;
a < count - 1;
a++)
{
end_c++;
}
for
(a = 0;
a < count / 2;
a++)
{
c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}
}
