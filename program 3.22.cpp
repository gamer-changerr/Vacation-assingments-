//Program 3.22 from excercise that reads name and address of a student and prints it on the screen using gets() and puts() function...
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char name[50],address[60];
	printf("Enter your Name:");
	gets(name);
	printf("\nEnter you Address:");
	gets(address);
	puts(name);
	puts(address);
	return 0;
	
}
