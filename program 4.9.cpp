//Program 4.9 from excercise that will find the largest integer out of three numbers using if-else statement...#include <stdio.h>
#include<stdio.h>
#include <conio.h>
int main()
{
	int x,y,z,larg;
	printf("Enter any number:");
	scanf("%d",&x);
	printf("Enter any number:");
	scanf("%d",&y);
	printf("Enter any number:");
	scanf("%d",&z);
	if (x>y) 
	larg=x;
	else
	larg=y;
	if (larg>z)
	printf("The largest number is : %d",larg);
	else
	larg=z;
	printf("The largest number is : %d",larg);
	return 0;
	
}

