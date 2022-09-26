
#include "main.h"

/**
 *_strspn - gets lengthof a prefix substring
 *@s: string to check
 *@accept: string to check against
 *
 *Return: string to check against
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int 1, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accepy[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
