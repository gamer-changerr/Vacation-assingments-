//Program 3.5 to input students's roll numbers,total marks, obtained marks and to calculate percentage marks...
#include <stdio.h>
#include <conio.h>
int main()
{
	int rn,tm,om;
	float pm;
	printf("\nEnter Roll number=");
	scanf("%d,&rn");
	printf("\nEnter Total marks=");
	scanf("%d,&tm");
	printf("\nEnter Obtained marks=");
	scanf("%d,&om");
	pm=om/tm*100;
	printf("\nPercentage marks = %f",pm);
	return 0;
	
}
