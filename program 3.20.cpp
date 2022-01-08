//Program 3.20 from excercise that reads base and height of a triangle and prints its area...
#include <stdio.h>
#include <conio.h>
int main()
{
	int b,h,area;
	printf("Enter the value of base of Triangle=");
	scanf("%d",&b);
	printf("Enter the value of height of Triangle=");
	scanf("%d",&h);
	area=(b*h)/2;
	printf("The area of Triangle is = %d",area);
	return 0;
}
