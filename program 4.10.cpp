//Program 4.10 to input a single character and prints a message "it's a vowel"or "it's a constant".Use if-else statment...
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	int a,e,i,o,u;
	printf("Enter any charachter:");
	scanf("%c",&ch);
	if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	printf("It is a vowel ");
	else 
	printf("It is a consonant " );
	return 0;
	
}
