//a text based menu to decide between one of two options
#include <iostream>
#include <math.h>
#include "binaryconv.h"

int menu()
{
	int userChoice;
	std::cin>>userChoice;
	if(userChoice==0|userChoice==1|userChoice==2)
	{
		return userChoice;
	}
	else 
	{
		std::cout<<"you entered \""<<userChoice<<"\".\n"<<"This is not a valid choice. Please choose either \"0,\" \"1,\" or \"2\".\n";
		menu();
	}
	
}
