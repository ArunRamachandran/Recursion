#include<stdio.h>
#include<string.h>

int palindrome(char *);

int main()
{
	char s[15];
	int pal, l;

	printf("Enter a string : \n");
	scanf("%s", s);
	l = strlen(s);
	pal = palindrome(s);
	if (pal == 1)
		printf("Is a palindrome\n");
	if (pal == 0)
		printf("Is not a palindrome\n");
}
int palindrome(char *s)
{
	int l;
	
	l = strlen(s);
	if (l >= 1){
		//printf("*s++ = %c\n", *s);
		//printf("s[--l] = %c\n", s[--l]);
		if (*s == s[--l]) {
			//printf("Both are equal\n");
			s[l] = '\0';
			*s++;
			palindrome(s);
		}
		else 
			return 0;
	}
	else
		return 1;
}
		
		


