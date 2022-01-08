//Program 4.11 to solve Program 4.9 using switch case statement..
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,large;
	printf("Enter 1st number:");
	scanf("%d",&x);
		printf("Enter 2nd number:");
	scanf("%d",&y);
		printf("Enter 3rd number:");
	scanf("%d",&z);
	switch (x>y)
	{
		case 1:
			switch (x>z)
			{
				case 1:
					large=x;
					break;
					case 0:
						large=z;
						break;
			}
			break;
			case 0:
			switch (y>z)
			{
			    case 1:
				large=y;
				break;
				case 0:
				large=z;
				break; 
			}
			break;
	
		 
    }
    printf("Largest number is : %d",large);
    return 0;
	                     	
	 }
