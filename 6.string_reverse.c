/* program to reverse string without altering the 
   original string... */

#include<stdio.h>
#include<string.h>

void str(char *);

main()
{
	char s[10];
	
	printf("Enter a string\n");
	gets(s);
	str(s);
	printf("\n");
	printf("Original string after calling fn :\n");
	puts(s);
}

void str(char *s)
{
	int l;
	char *p = s;
	
	l = strlen(s);
	if (l > 0) {
		printf("%c", s[--l]);
		s[l] = '\0';
		str(s);
	}
	else
		return;
}
