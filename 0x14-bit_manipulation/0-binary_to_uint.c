#include "main.h"
/**
* binary_to-vint - go from binary to unsigned int
* @b: pinter
* Return: binary or 0
*/
unsigned int binary_to_uint(const char *b)
{
    int count = 0;
    unsigned int binary;

    binary = 0;
    if (!b)
    {
        return (0);
    }
    for (count = 0; b[count] != '\0'; count ++)
    {
        if (b[count] != '0' && b[count] != '1')
        {
            return (0);
        }
    }
    for (count = 0; b[count] != '\0'; count++)
    {
        binary <<= 1;

        if (b[count]== '1')
        {
            binary += '1';
        }
    }
    return (binary);
}