#include<stdio.h>
#include<math.h>

float expon(float, int);
int fact(int);

int main()
{
	float x, sum;
	int n = 10;

	printf("Enter the value of X : \n");
	scanf("%f", &x);
	printf("n : %d", n);
	sum = expon(x,n);
	printf("Sum of Exponential series : %f\n", sum);
}
float expon(float x, int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return( (pow(x,n) / fact(n)) + expon(x,n - 1)); 
}
int fact(int n)
{
	if (n == 0)
		return 1;
	else
		return(n * fact(n - 1));
}
