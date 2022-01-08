//Program 4.5 that prints a larger number of two numbers..
#include <stdio.h>
#include <conio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	if (x>y)
	printf("X is greater than y");
	else
	printf("Y is greater than x");
	return 0;
}
