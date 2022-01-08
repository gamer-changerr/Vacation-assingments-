//Program 3.15 that perfoms all compound assignments operations on an integer..
#include <stdio.h>
#include <conio.h>
int main()
{
	int a;
	a=20;
	printf("Value of a : %d",a);
	a+=5;
	printf("\nValue of a after a+=5 : %d",a);
	a-=5;
	printf("\nValue of a after a-=5 : %d",a);
    a*2;
    printf("\nValue of a after a*2 : %d",a);
    a/2;
    printf("\nValue of a after a/2 : %d",a);
    a%2;
    printf("\nValue of a after a%2 : %d",a);
    return 0;

}
