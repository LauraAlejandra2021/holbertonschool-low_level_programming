#include "holberton.h"

/**
 * print_chessboard funcion que imprime el tablero
 * @a: Puntero a un Array de punteros
 *
 * Return:(void)
 */
void print_chessboard(char (*a)[8])

{
int b;
int c;
for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
{
print_chessboard(((a + b) + c));
}
putchar('\n');
}
}

