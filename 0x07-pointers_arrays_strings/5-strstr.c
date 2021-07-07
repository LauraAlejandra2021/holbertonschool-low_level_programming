#include "holberton.h"
/**
 *_strstr - encuentra una subcadena
 *@haystack: Puntero al primer segmento
 *@needle: Puentero al segmento que recibe
 *Return : un puntero al comienzo de la subcadena, 0 si no lo encuentra
 */

char *_strstr(char *haystack, char *needle)

{
	int a = 0;
	int b = 0;

	while (*(haystack + a))

	{
		if (*(haystack + a) == *(needle + b))
	{
		b++;
		if (*(needle + b) == '\0')
	        return ((haystack + a) - (b - 1));
	}
		else
		b = 0;
	        a++;
	}
	if (*needle == '\0')
	return (haystack);
	return (0);
}
