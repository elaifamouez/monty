#include "monty.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: type str compared
 * @s2: type str compared
 * Return: 0 if s1 and s2 are equals.
 *         another value if they are different
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] == s2[i] && s1[i]; i++)
;
if (s1[i] > s2[i])
return (1);
if (s1[i] < s2[i])
return (-1);
return (0);
}
