#include<stdio.h>
#include<math.h>

float sine(float, int);
int fact(int n);

int main()
{
	float x, sum;

	printf("Enter value of X to find the sum of sine series:\n");
	scanf("%f", &x);
	printf("x : %f\n", x);
	sum = sine(x,10);
	printf("Sum of sine series : %f\n", sum);
}
float sine(float x, int n)
{
	if (n == 0) 
		return x;

	return ( ( (pow(-1,n) / fact((2 * n) + 1)) * pow(x,(2 * n) + 1)) + sine(x,n - 1));
}
int fact(int n)
{
	if (n == 0)
		return 1;
	if (n > 0)
		return(n * fact(n - 1));
}
