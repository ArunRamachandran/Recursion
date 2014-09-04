/* Another version of 1st qstn. 
   i.e to get the sum of the digits of a No.
   using Recursion itself, With Global Variable */

#include<stdio.h>

int sum_digits(int);

main()
{
	int n = 123, x;

	printf("n = %d\n", n);
	x = sum_digits(n);
	
	printf("Sum of digits = %d\n", x);
}

int sum;

int sum_digits(int n)
{
	int x, z;
	
	if (n > 0) {
		z = n % 10;
		sum = sum + z;
		x = sum_digits(n / 10);
	}
	else 
		return sum;
}
