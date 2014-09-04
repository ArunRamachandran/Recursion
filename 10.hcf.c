#include<stdio.h>
#include<string.h>

int hcf(int, int);

int main()
{
	int a, b, rslt;
	
	printf("Enter two Numbers :\n");
	scanf("%d%d", &a, &b);
	rslt = hcf(a,b);
	printf("Hcf of %d & %d : %d\n", a, b, rslt);
}
int hcf(int a, int b)
{
	if (b == 0)
		return a;
	else
		return hcf(b, a % b);
}
