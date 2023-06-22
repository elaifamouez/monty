#include "monty.h"
/**
 * _sch - search if a char is inside a string
 * @s: string to review
 * @c: char to find
 * Return: 1 if success 0 if not
 */
int _sch(char *s, char c)
{
int cont = 0;

while (s[cont] != '\0')
{
if (s[cont] == c)
{
break;
}
cont++;
}
if (s[cont] == c)
return (1);
else
return (0);
}
