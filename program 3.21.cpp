//Program 3.21 from excercise that reads temperature in Celsius, converts it into Fahrenheit and prints it on the screen..
#include <iostream>
#include <conio.h>
int main()
{
float ftemp,ctemp;
	std::cout <<"\nPlease input a value for Celsius temperature:";
	std::cin>>ctemp;
	ftemp=(ctemp*9/5)+32;
	std::cout<<"\nFahrenheit equivalent of Celsius: "<<ctemp<<" is"<<ftemp;
	getche();
	return 0;
}
