/*
 * Rational.cpp
 *
 *  Created on: Jul 7, 2020
 *      Author: Osama
 */

#include "Rational.h"

Rational::Rational(int num, int den)
{
	numerator = num;
	denominator = den;
}

 Rational Rational::add (Rational r1, Rational r2)
{
	Rational result( (r1.numerator*r2.denominator) + (r2.numerator*r1.denominator) , r1.denominator*r2.denominator);
	result.simplify();
	return result;
}

Rational Rational::subtract (Rational r1, Rational r2)
{
	Rational result( (r1.numerator*r2.denominator) - (r2.numerator*r1.denominator) , r1.denominator*r2.denominator);
	result.simplify();
	return result;
}

Rational Rational::multiply (Rational r1, Rational r2)
{
	Rational result( r1.numerator*r2.numerator , r1.denominator*r2.denominator);
	result.simplify();
	return result;
}

Rational Rational::divide (Rational r1, Rational r2)
{
	Rational result( r1.numerator*r2.denominator , r1.denominator*r2.numerator);
	result.simplify();
	return result;
}

void Rational::simplify()
{

	int upperLimit = (numerator<denominator ? numerator/2 : denominator/2);

	for (int i = 2; i <= upperLimit; i++)
	{
		if (numerator%i == 0 && denominator%i == 0)
		{
			numerator = numerator/i;
			denominator = denominator/i;
			simplify();
			upperLimit = (numerator<denominator ? numerator/2 : denominator/2);
		}
	}
}


string Rational::toRationalString()
{
	std::stringstream ss;
	ss << numerator;
	std::string num = ss.str();

	std::stringstream ss2;
	ss2 << denominator;
	std::string den =ss2.str();

	return  (num+"/"+den);
}

double Rational::toDouble()
{
	double result = (double)numerator/denominator;
	return result;
}



