//Program 4.7 to show that an input character is vowel or not...
#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 'a': printf("vowel a");
		break;
		case 'e': printf("vowel e");
		break;
		case 'i': printf("vowel i");
		break;
		case 'o': printf("vowel o");
		break;
		case 'u': printf("vowel u");
		break;
		default : printf("not a vowel");
		
	}
	return 0;
}
