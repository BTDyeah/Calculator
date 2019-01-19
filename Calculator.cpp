#include "Calculator.h"
#include <iostream>
#include <cmath>

void Calculator::setAdd(double counter = 0)
{
	while(std::cin >> sumInput)
	{
		counter+=sumInput;
	}
	std::cout << counter;
}

void Calculator::setSub(double counter = 0)
{
	while(std::cin >> subInput)
	{
		counter-=-subInput;
	} 
	std::cout << counter;
}

void Calculator::setMult(double counter = 1)
{
	while(std::cin >> multInput)
	{
		counter*=multInput;
	}
	std::cout << counter;
}

void Calculator::setDiv()
{
	

		

}

void Calculator::setPow()
{
	std::cin >> powInputBase;
	std::cin >> powInput;
	std::cout << pow(powInputBase,powInput);
}

void Calculator::setSqrt()
{
	std::cin >> sqrootInput;
	std::cout << sqrt(sqrootInput);
}
