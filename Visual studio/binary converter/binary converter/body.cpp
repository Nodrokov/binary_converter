//calls functions
#include <iostream>
#include <math.h>
#include "binaryconv.h"

int main()
{
	std::cout<<"What would you like to do?\n\n"<<"[0] Quit\n"<<"[1] convert a number from binary to decimal\n"<<"[2] convert a number from decimal to binary\n";
	int userChoice=menu();
	if (userChoice==0)
	{
		return 0;
	}
	if (userChoice==1)
	{
		long unsigned int longUserInput;
		int decimalInt=0;
		std::cout<<"You have selcted binary to decimal conversion.\n";
		bdConverter:
		std::cout<<"Please enter a positive binary integer under 1E10 you wish to convert to decimal\n";
		std::cin>>longUserInput;
		decimalInt=bdconverter(longUserInput);
		if(decimalInt==9999)
		{
			std::cout<<"\nError!\n\n\n\""<<longUserInput<<"\" is not a positive binary integer under 10000000000\n\n";
			goto bdConverter;
		}
		else
		{
		std::cout<<"\n"<<decimalInt<<"\n";
		}
	}
	if (userChoice==2)
	{
		double userInput=0;
		long unsigned int binaryInt=0;
		std::cout<<"You have selected decimal to binary conversion.\n"<<"Please enter a positive decimal integer under 1024 you wish to convert to binary\n";
		std::cin>>userInput;
		binaryInt=dbconverter(userInput);
		std::cout<<"\n"<<binaryInt<<"\n";
	}
	std::cout<<"\n";
	//system("pause>nul");
	main();
}