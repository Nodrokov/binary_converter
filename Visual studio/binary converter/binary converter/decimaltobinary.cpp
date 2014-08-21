#include <iostream>
#include <math.h>
#include "binaryconv.h"

long unsigned int dbconverter(double userInput)
{
	double power=0;
	long unsigned int binaryInt=0;
	while(1)
	{
		if(userInput<pow(2,power))
		{
			power=power-1;
			while(1)
			{
				if(userInput>=pow(2,power))
				{
					userInput=userInput-pow(2,power);
					binaryInt=binaryInt*10;
					binaryInt++;
				}
				else
				{
					binaryInt=binaryInt*10;
				}
				if(power==0)
				{
					return binaryInt;
				}
				power=power-1;
			}
		}
		power++;
	}
}