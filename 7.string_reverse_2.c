#include<stdio.h>
#include<string.h>

void reverse(char *, int );
main()
{
	char s[10];
	int l;

	printf("Enter a string\n");
	gets(s);
	l = strlen(s);
	printf("String : %s\n", s);
	printf("Reversed string :\n");
	reverse(s,l);
	printf("\n");
	printf("Retained string after function call : %s\n", s);
}

void reverse(char *s, int l)
{
	
	if (l > 0) {
		--l;
		printf("%c", s[l]);
		reverse(s,l);
	}
	else
		return;
}
	
