#include<stdio.h>

int fact(int);

main()
{
	int n = 4, fac;

	printf("Enter a number to find factorial\n");
	scanf("%d", &n);
	fac = fact(n);
	printf("Factorila of %d : %d\n", n, fac);
}

int fact(int n)
{
	if (n == 0)
		return(1);
	if (n > 0)
		return( n * fact(n - 1));
}	
