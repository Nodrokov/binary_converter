//converts a binary int to a decimal int
#include <iostream>
#include <math.h>
#include "binaryconv.h"

int bdconverter(long unsigned int userInput)
{
	using std::cout;
	using std::cin;
	int decimal=0;
	for(int placeValue=1;placeValue<1024;placeValue=placeValue*2)
	{
		if(userInput==0)
		{
			return decimal;
		}
		if(userInput%10>1)
		{
			return 9999;
		}
		if(userInput%10==1)
		{
			userInput=userInput-1;
			decimal=decimal+placeValue;
		}
		userInput=userInput/10;
	}
	return 9999;
	
}