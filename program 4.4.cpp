//Program 4.4 that inputs a number and finds whether it is even or odd using if-else structure...
#include <stdio.h>
#include <conio.h>
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	if(x%2==0)
	printf("%d is even",x);
	else 
	printf("%d is odd",x);
	return 0;
}
