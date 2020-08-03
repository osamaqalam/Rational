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

	Rational addition1 = Rational::add(r1,r2);
	Rational addition2 = r1+r2;
	Rational subtraction1 = Rational::subtract(r1,r2);
	Rational subtraction2 = r1-r2;
	Rational multipication1 = Rational::multiply(r1,r2);
	Rational multipication2 = r1*r2;
	Rational division1 = Rational::divide(r1,r2);
	Rational division2 = r1/r2;


	cout << "Addition = " << addition1.toRationalString() << " = " << addition2.toRationalString() << " = " << addition1.toDouble() << endl;
	cout << "Subtraction = " << subtraction1.toRationalString() << " = " << subtraction2.toRationalString() << " = " << subtraction1.toDouble() << endl;
	cout << "Multipication = " << multipication1.toRationalString() << " = " << multipication2.toRationalString() << " = " << multipication1.toDouble() << endl;
	cout << "Division = " << division1.toRationalString() << " = " << division2.toRationalString() << " = " <<  division1.toDouble() << endl;

	return 0;
}
