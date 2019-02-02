#include "Calculator.h"
#include <iostream>
#include <cmath>

void Calculator::setAdd(double counter)
{
	while(std::cin >> sumInput)
	{
		counter+=sumInput;
	}
	std::cout << counter;
}

void Calculator::setSub(double counter )
{
	while(std::cin >> subInput)
	{
		counter-=-subInput;
	} 
	std::cout << counter;
}

void Calculator::setMult(double counter)
{
	while(std::cin >> multInput)
	{
		counter*=multInput;
	}
	std::cout << counter;
}

void Calculator::setDiv() //formula firstNum/(number of arrays multiplicated by each other)
{
	int i;
	double firstNum, secondNum = 1.0;
	std::cin >> firstNum;
	std::cin >> i;
	double *drag = new double[i];
	
	
	for(int x=0;x,i;x++)
	{
		std::cin >> drag[i];
	}
	
	for(int x=0;x<i;x++)
	{
		secondNum*=drag[x];
	}
	
	if(secondNum==0)
	{
		std::cout << "You can't divide by zero, try again/n";
	}
	else
	{
		std::cout << firstNum / secondNum << std::endl;
	}	
	
	delete &drag[i];

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
