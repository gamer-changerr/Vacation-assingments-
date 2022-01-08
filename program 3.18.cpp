//Program 3.18 to illustrate the operator precedence available in C programming language..
#include <stdio.h>
#include <conio.h>
int main()
{
	int a=20;
	int b=10;
	int c=15;
	int d=5;
	int e;
	e=(a+b)*c/d;    //(30*15)/5
	printf("Value of (a+b)*c/d is :%d\n",e);
	e=((a+b)*c)/d;   //(30*15)/5
	printf("\nValue of ((a+b)*)/d is : %d",e);
	e=(a+b)*(c/d);  //(30)8(15/5)
	printf("\nValue of (a+b)*(c/d) is : %d",e);
	e=a+(b*c)/d;    //20+(150/5)
	printf("\nValue of a+(b*c)/d is : %d",e);
    return 0;
}
