#include <iostream>
#include "Calculator1.h"
#include <sstream>
using namespace std;

Calculator1::Calculator1() {
	setNumerator(0);
	setDenominator(1);
}

Calculator1::Calculator1(const Fraction& frac) {
	setNumerator(frac.getNumerator());
	setDenominator(frac.getDenominator());
}

Calculator1::Calculator1(const Calculator1& other) {
	this->setDenominator(other.getDenominator());
	this->setNumerator(other.getNumerator());
}

long Calculator1::getNumerator() const {
	return numerator;
}

unsigned short Calculator1::getDenominator() const {
	return denominator;
}

Calculator1 operator+(const Calculator1& int1, const Calculator1& int2) {
	Calculator1 result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() + int2.getNumerator();
	res1 = int1.getDenominator() + int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator1 operator-(const Calculator1& int1, const Calculator1& int2) {
	Calculator1 result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() - int2.getNumerator();
	res1 = int1.getDenominator() - int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

Calculator1 operator*(const Calculator1& int1, const Calculator1& int2) {
	Calculator1 result;
	long res;
	unsigned short res1;
	res = int1.getNumerator() * int2.getNumerator();
	res1 = int1.getDenominator() * int2.getDenominator();
	result.setNumerator(res);
	result.setDenominator(res1);
	return result;
}

bool operator >=(const Calculator1& int1, const Calculator1& int2) {
	return (int1.getNumerator() >= int2.getNumerator()) && (int1.getDenominator() >= int2.getDenominator());
}
bool operator <=(const Calculator1& int1, const Calculator1& int2) {
	return (int1.getNumerator() <= int2.getNumerator()) && (int1.getDenominator() <= int2.getDenominator());
}
bool operator !=(const Calculator1& int1, const Calculator1& int2) {
	return !(int1 == int2);
}

bool operator==(const Calculator1& int1, const Calculator1& int2) {
	return (int1.getNumerator() == int2.getNumerator()) && (int1.getDenominator() == int2.getDenominator());
}

bool operator<(const Calculator1& int1, const Calculator1& int2) {
	return (int1.getNumerator() < int2.getNumerator()) && (int1.getDenominator() < int2.getDenominator());
}

bool operator>(const Calculator1& int1, const Calculator1& int2) {
	return (int1.getNumerator() > int2.getNumerator()) && (int1.getDenominator() > int2.getDenominator());
}

Calculator1 Calculator1::operator=(const Calculator1& other) {
	setNumerator(other.getNumerator());
	setDenominator(other.getDenominator());
	return *this;
};



ostream& operator << (ostream& out, const Calculator1& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Calculator1& r)
{
	long x;
	unsigned short y = 1;
	
	cout << "Enter Numerator: "; in >> x;
	if (x == 0) throw x;
	r.setNumerator(x); cout << endl;
	

	
	cout << "Enter Denomirator: ";
	in >> y;
	if (y == 0) throw y;
	r.setDenominator(y); cout << endl;
	return in;
}

Calculator1::operator string() const {
	stringstream ss;
	cout << "Your Numerator: " << getNumerator() << endl;
	cout << "Your Denomirator: " << getDenominator() << endl;
	ss << endl;
	return ss.str();
}


Calculator1& Calculator1::operator ++()
{
	unsigned short x = getDenominator();
	x++;
	setDenominator(x);
	return *this;
}
Calculator1& Calculator1::operator --()
{
	unsigned short x = getDenominator();
	x--;
	setDenominator(x);
	return *this;
}
Calculator1 Calculator1::operator ++(int)
{
	Calculator1 t(*this);
	unsigned short x = getDenominator();
	x++;
	t.setDenominator(x);
	return t;
}
Calculator1 Calculator1::operator --(int)
{
	Calculator1 t(*this);
	unsigned short x = getDenominator();
	x--;
	t.setDenominator(x);
	return t;
}