#include <stdlib.h>
#include <stdio.h>

/**
 *main -Positive or negative.
 *
 *return: 0 as success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
Return (0);
}
