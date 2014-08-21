#include <iostream>
#include "binaryconv.h"
#include "menu.h"

int menu_1()
{
	int userChoice;
	std::cout<<"What would you like to do?\n\n"<<"[0] Quit\n"<<"[1] convert a number from binary to decimal\n"<<"[2] convert a number from decimal to binary\n";
	std::cin>>userChoice;
	if(userChoice==0|userChoice==1|userChoice==2)
	{
		return userChoice;
	}
	else 
	{
		std::cout<<"you entered \""<<userChoice<<"\".\n"<<"This is not a valid choice. Please choose either \"0,\" \"1,\" or \"2\".\n";
		menu(1);
	}
}