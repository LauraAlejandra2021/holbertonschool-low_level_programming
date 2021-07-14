#include "holberton.h"

/**
 * malloc - fun  que asigna espacio de memoria dinamica
 * create_array - crear un array
 * @size: tamaño del array
 * @c: variable
 * return: p
 */

char *create_array(unsigned int size, char c)

{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(*p));
	if (p == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p)
}
