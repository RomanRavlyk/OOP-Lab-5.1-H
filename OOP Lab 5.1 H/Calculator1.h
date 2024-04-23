#pragma once
#include <iostream>
#include "Fraction.h"
using namespace std;

class Calculator1 : private Fraction {
private:
	long numerator = 0;
	unsigned short denominator = 1;
public:
	Calculator1();
	Calculator1(const Fraction& frac);
	Calculator1(const Calculator1& other);
	~Calculator1() {};

	long getNumerator() const;
	unsigned short getDenominator() const;
	void setNumerator(long value) { numerator = value; };
	void setDenominator(unsigned short value) { denominator = value; };

	Calculator1& operator ++();
	Calculator1& operator --();
	Calculator1 operator ++(int);
	Calculator1 operator --(int);


	Calculator1 operator=(const Calculator1& int1);

	friend bool operator ==(const Calculator1& int1, const Calculator1& int2);
	friend bool operator >(const Calculator1& int1, const Calculator1& int2);
	friend bool operator <(const Calculator1& int1, const Calculator1& int2);
	friend bool operator !=(const Calculator1& int1, const Calculator1& int2);
	friend bool operator >=(const Calculator1& int1, const Calculator1& int2);
	friend bool operator <=(const Calculator1& int1, const Calculator1& int2);
	friend Calculator1 operator+ (const Calculator1& int1, const Calculator1& int2);
	friend Calculator1 operator- (const Calculator1& int1, const Calculator1& int2);
	friend Calculator1 operator* (const Calculator1& int1, const Calculator1& int2);

	friend ostream& operator << (ostream&, const Calculator1&);
	friend istream& operator >> (istream&, Calculator1&);
	operator string() const;
};