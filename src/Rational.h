/*
 * Rational.h
 *
 *  Created on: Jul 7, 2020
 *      Author: Osama
 */



#ifndef RATIONAL_H_
#define RATIONAL_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Rational
{
private:
	int numerator;
	int denominator;

public:

	Rational(int num=0, int den=1);
	static Rational add (Rational r1, Rational r2);
	static Rational subtract (Rational r1, Rational r2);
	static Rational multiply (Rational r1, Rational r2);
	static Rational divide (Rational r1, Rational r2);

	Rational operator + (Rational const &obj);
	Rational operator - (Rational const &obj);
	Rational operator * (Rational const &obj);
	Rational operator / (Rational const &obj);


	void simplify();
	string toRationalString();
	double toDouble();
};


#endif /* RATIONAL_H_ */
