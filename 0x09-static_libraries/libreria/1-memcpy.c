#include "holberton.h"
 /**
  *_memcpy - copies memory area
  *@dest: Lugar dónde queda la nueva informacíon
  *Return: el puntero de dest
  */
 char *_memcpy(char *dest, char *src, unsigned int n)
 {
	 unsigned int i;

	 for (i = 0; i < n; i++)
	 {
		 *(dest + i) = *(src + i);
	 }
	 return (dest);
 }
