#include "monty.h"
/**
 * _strtoky - function that cut a string into tokens depending of the delimit
 * @s: string to cut in parts
 * @d: delimiters
 * Return: first partition
 */
char *_strtoky(char *s, char *d)
{
static char *res;
int i = 0, j = 0;

if (!s)
s = res;
while (s[i] != '\0')
{
if (_sch(d, s[i]) == 0 && s[i + 1] == '\0')
{
res = s + i + 1;
*res = '\0';
s = s + j;
return (s);
}
else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 0)
i++;
else if (_sch(d, s[i]) == 0 && _sch(d, s[i + 1]) == 1)
{
res = s + i + 1;
*res = '\0';
res++;
s = s + j;
return (s);
}
else if (_sch(d, s[i]) == 1)
{
j++;
i++;
}
}
return (NULL);
}
