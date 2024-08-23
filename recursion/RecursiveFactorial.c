#include <stdio.h>

/**
 * Factorial
 * f(n)에서 
 * n >= 1 ==> n * f(n-1)
 * n = 0 ==> 1
 */

int Factorial(int n)
{
	if (n == 0)
		return 1;
	return n * Factorial(n-1);
}

int main(void)
{
	for(int i = 0; i <= 5; i++)
	{
		printf("%d\n", Factorial(5-i));
	}
	return 0;
}