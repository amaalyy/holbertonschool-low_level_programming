#include "main.h"
/**
 * *_strncat - concatenates two strings + n
 * @dest: first string
 * @src: second string
 * @n: maximum number of chars
 * Return: dest
 *
*/
char *_strncat(char *dest, char *src, int n)
{
int d_lenght;
int s_lenght;

for (d_lenght = 0; dest[d_lenght] != '\0'; d_lenght++)
{
}
for (s_lenght = 0; src[s_lenght] && n > s_lenght; s_lenght++)
{
	dest[d_lenght + s_lenght] = src[s_lenght];
}
return (dest);
}
