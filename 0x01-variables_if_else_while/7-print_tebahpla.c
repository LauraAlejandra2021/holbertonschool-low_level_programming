#include <stdio.h>
/**
 * main - Prints el abecedario de atrás a adelante.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
