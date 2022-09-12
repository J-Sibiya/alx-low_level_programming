#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to int n everytime
 *it excecutes, and prints it
 *Return: Always zero(Success)
 * Description: using the main function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	  /* your code goes there */
	if (n > 0)
	{
			printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
			printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
			printf("%i is negative\n", n);
	}
	return (0);
}
