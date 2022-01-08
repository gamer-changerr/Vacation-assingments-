//Program 3.19 from excercise that reads three numbers and prints their sum,product and average....
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,sum,pro,avg;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	printf("Enter the value of c=");
	scanf("%d",&c);
	sum=a+b+c;
	printf("Sum = %d",sum);
	pro=a*b*c;
	printf("\nProduct = %d",pro);
	avg=sum/3;
	printf("\nAverage = %d",avg);
	return 0;
}
