#include<stdio.h>

int sum_series(int, int);

main()
{
	int a, b, sum;
	
	printf("Enter two digits\n");
	scanf("%d%d", &a, &b);
	printf("\na = %d  b = %d\n", a, b);
	sum = sum_series(a,b);
	if (sum == -1)
		printf("Unable to process, since a > b\n");
	else
		printf("Sum of series, from %d to %d =  %d\n", a, b, sum);
}

int sum_series(int a, int b)
{
	int x;
	
	if (a > b)
		return -1;
	if ( (a < b) && (a != b))
		return (a + sum_series(a + 1, b));
	if (a == b)
		return b;
}
