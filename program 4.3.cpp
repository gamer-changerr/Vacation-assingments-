//Program 4.3 that inputs two numbers and prints the message if both are equal...
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);
	if(a==b)
	printf("Both numbers are equal");
	return 0;
}
