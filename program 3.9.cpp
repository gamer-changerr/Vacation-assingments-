//Program 3.9 using gets function
#include <conio.h>
#include <stdio.h>
int main()
{
	char name[20];
	printf ("Enter your Name:");
	gets(name);
	puts(name);
	getch();
	return 0;
}
