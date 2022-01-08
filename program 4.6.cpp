//Program 4.6 to find the smallest numbers of three numbers...
#include <stdio.h>
#include <conio.h>
int main()
{
	int x,y,z,s;
	printf("Enter 1st number:");
	scanf("%d",&x);
		printf("Enter 2nd number:");
	scanf("%d",&y);
		printf("Enter 3rd number:");
	scanf("%d",&z);
	if (x<y)
	s=x;
	else
	s=y;
	if (y<z)
	printf("The smallest number is : %d",s);
	else
	printf("The smallest number is : %d",z);
	return 0;
	
}
