#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
	public:
		void setAdd(double counter);
		void setSub(double counter);
		void setMult(double counter);
		void setDiv();
	    void setPow();
	    void setSqrt();	
		
	
			
	private:
		
		double sumInput, subInput, multInput, firstDivInput, secondDivInput, powInputBase, powInput, sqrootInput;			
	
};

#endif
