#include "holberton.h"
/**
 *_strchr - encontrar caracteres especificos de un string
 *@s: el puntero que tiene el string
 *@c: la variable que tiene el caracter a comparar
 *Return: dirección del primer caracter que encuentra
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
