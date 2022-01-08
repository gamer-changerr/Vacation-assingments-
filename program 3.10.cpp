//Program 3.10 to get name and age (in years)of a person.Calculate the age in months and print the name of person and its age in months
#include <stdio.h>
#include <conio.h>
int main()
{
	int age,age_months;
	char name[50];
	printf("Enter your Name:");
	gets(name);
	printf("\nEnter your age:");
	scanf("%d",&age);
	age_months=age*12;
	printf("\nAge in months = %d",age_months);
	getch();
	return 0;
}
