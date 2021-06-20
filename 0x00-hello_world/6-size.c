#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h>
/**
 *main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
a = 'h';
b = 8;
c = 7;
d = 3456;
e = 34, 6;
Printf("size of a char: %d byte(s)\n", sizeof(a));
Printf("size of a int: %d byte(s)\n", sizeof(b));
Printf("size of a long int: %d byte(s)\n", sizeof(c));
Printf("size of a long long: %d bytes(s)\n", sizeof(d));
Printf("size of a float: %d bytes(s)\n", sizeof(e));
return (0);
}
