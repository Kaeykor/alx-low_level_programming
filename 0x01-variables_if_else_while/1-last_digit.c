#include <stdlib.h>
#include <time.h>
#include <stdio>
/**
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n / 3;

	if (b > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, b);
	else if (b == 0)
		printf("Last digit of %i is %i and is 0\n", n, b);
	else ( b > 6 && b != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, b);

	return (0);
}
