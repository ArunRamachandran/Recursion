#include<stdio.h>

int fib(int);
main()
{
	int n, fb;

	printf("Enter a digit :\n");
	scanf("%d", &n);

	fb = fib(n);
	printf("Sum of first %d terms of Fib. series = %d\n", n, fb);
}

int fib(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	if (n > 2) {
		return ( (n - 2) + fib(n = (n - 1)));
	}
	
}
