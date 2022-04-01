#include <stdio.h>

<<<<<<< HEAD
/** main - Finds and prints the largest prime 
 * factor of the number 612852475143. 
 *
 * Return: Always 0. 
=======
/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
>>>>>>> 24a411c54900373715763854e8a560f928712e61
 */
int main(void)
{
long prime = 612852475143, div;

while (div < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}

for (div = 3; div < (prime / 2); div += 2)
{
if ((prime % div) == 0)
prime /= div;
}
}

printf("%ld\n", prime);

return (0);
}
<<<<<<< HEAD


=======
>>>>>>> 24a411c54900373715763854e8a560f928712e61
