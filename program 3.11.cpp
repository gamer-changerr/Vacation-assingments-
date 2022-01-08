//Program 3.11 to convert Fahrenheit tempertaure into Celsius temeprature.The Fahrenheit temperature should be input from the keyboard at the runtime....
#include <iostream>
#include <conio.h>
int main()
{
	float ftemp,ctemp;
	std::cout <<"\nPlease input a value for Fahrenheit temperature:";
	std::cin>>ftemp;
	ctemp=(ftemp-32)*5/9;
	std::cout<<"\nCelsius equivalent of Fahrenheit:"<<ftemp<<" is" <<ctemp;
	getche();
	return 0;
}
