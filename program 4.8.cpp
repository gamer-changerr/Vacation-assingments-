//Program 4.8 to find that a number that is input from the keyboard is positive,negative,even, or odd?....
#include<iostream>
#include<conio.h>
int main()
{
	int num;
	std::cout<<"\nEnter a number between -10 and 10:\t";
	std::cin>>num;
	if (num>0)
	{
		std::cout<<num<<"is positive number"<<std::endl;
		if(num%2==0)
		std::cout<<num<<"is also even number"<<std::endl;
		else
		std::cout<<num<<"is odd number"<<std::endl;
	}
	else
	std::cout << num<<  "is negative number" <<std::endl;
	return 0;
	
}
