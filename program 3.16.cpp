//Program 3.16 that perfoms prefix increment operation..
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,sum;
	a=2;
	b=65;
	c=32;
	sum=a+b+(++c);
	printf("Sum : %d",sum);
	printf("\nc = %d",c);
	return 0;
}
