#include<stdio.h>

int reverse(int);

main()
{
	int n = 123, rev;

	rev = reverse(123);
	printf("n = %d\n", n);
	printf("Reversed value : %d\n", rev);

}

int reverse(int n)
{
	if (n / 10 == 0)
		return n;
	if (n / 10 > 99)
		return( (n % 10) * 1000 + reverse(n / 10));
	if (n / 10 > 9)
		return( (n % 10) * 100 + reverse(n / 10));
	if (n / 10 > 0)
		return( (n % 10) * 10 + reverse(n / 10));
	else
		return;

}
