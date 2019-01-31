#include <iostream>
#include "Calculator.h"

int main() 
{
	char sign;
	Calculator obj;
	std::cout << "Please enter one of the following signs for following operations\n" 
	<< "+ --> addition\n" << "- --> subtraction\n" << "* --> multiplication\n" 
	<< "/ --> divison\n" << "p --> power\n" << "s -- square root\n";
	std::cin >> sign;
		
		switch(sign)
	{
		case '+':
			obj.setAdd(); break;
		case '-':
			obj.setSub(); break;
		case '*':
			obj.setMult(); break;
		case '/':
			obj.setDiv(); break;
		case 'p':
			obj.setPow(); break;
		case 's':
			obj.setSqrt(); break;
		default: 
			std::cout << "Please try again entering one of valid characters--> +, -, *, /, p, s\n";			
						
	}
	return 0;
}
