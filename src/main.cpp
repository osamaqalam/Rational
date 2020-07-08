//============================================================================
// Name        : COEN244-HW1-Rational.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Rational.h"



int main() {

	Rational r1 (1,3);
	Rational r2 (7,8);

	Rational addition = Rational::add(r1,r2);
	Rational subtraction = Rational::subtract(r1,r2);
	Rational multipication = Rational::multiply(r1,r2);
	Rational division = Rational::divide(r1,r2);

	cout << "Addition = " << addition.toRationalString() << " = " << addition.toDouble() << endl;
	cout << "Subtraction = " << subtraction.toRationalString() << " = " << subtraction.toDouble() << endl;
	cout << "Multipication = " << multipication.toRationalString() << " = " << multipication.toDouble() << endl;
	cout << "Division = " << division.toRationalString() << " = " << division.toDouble() << endl;

	return 0;
}
