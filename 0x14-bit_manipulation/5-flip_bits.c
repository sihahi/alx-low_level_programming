#include "main.h"

/**
* flip_bits -  function that returns the number of bits you would need to flip
* to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits to flip to convert numbers
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned long int x = n ^ m;
unsigned int count = 0;

while (x)
{
if (x & 1ul)
count++;
x = x >> 1;
}
return (count);
}
