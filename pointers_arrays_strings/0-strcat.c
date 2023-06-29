# include "main.h"
/**
 * *_strcat -  concatenates two strings
 *@dest: first string
 *@src: second string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
int d_lenght;
int s_lenght;

for (d_lenght = 0; dest[d_lenght] != '\0'; d_lenght++)
{
}
for (s_lenght = 0; src[s_lenght]; s_lenght++)
{
	dest[d_lenght + s_lenght] = src[s_lenght];
}
return(dest);
}
