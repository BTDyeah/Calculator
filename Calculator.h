#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
	public:
		void setAdd(double counter = 0);
		void setSub(double counter = 0);
		void setMult(double counter = 1);
		void setDiv();
	        void setPow();
	    	void setSqrt();	
		
	
			
	private:
		
		double sumInput, subInput, multInput, firstDivInput, secondDivInput, powInputBase, powInput, sqrootInput;			
	
};

#endif
