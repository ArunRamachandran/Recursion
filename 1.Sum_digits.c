/* Program to get the sum of digits
   of the given Number, Using RECURSION,
   (without using global Variable)     */
#include<stdio.h>

int sum_digits(int);

main()
{
	int n = 123, x;

	printf("n = %d\n", n);
	x = sum_digits(n);
	
	printf("Sum of digits = %d\n", x);
}

//int sum;

int sum_digits(int n)
{
	int x, z;

	x = n % 10;
	if (n > 0) {
		n = n / 10;
		x = x + sum_digits(n);
	}
	return x;
}
	

