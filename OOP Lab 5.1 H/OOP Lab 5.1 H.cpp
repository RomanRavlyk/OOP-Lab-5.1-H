#include "Calculator.h"
#include "Calculator1.h"
#include <iostream>

using namespace std;

int main() {
	Calculator calculator;

	try{
		cin >> calculator;
		cout << calculator;
	}
	catch (long) {
		cout << "Your numerator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Your denominator cannot be 0!";
		exit(0);
	}

	Calculator calculator1;

	try{
		cin >> calculator1;
		cout << calculator1;
	}
	catch (long) {
		cout << "Your numinator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Your denominator cannot be 0!";
		exit(0);
	}


	Calculator fraction2 = calculator + calculator1;

	cout << fraction2;

	fraction2 = calculator - calculator1;
	cout << fraction2;

	fraction2 = calculator * calculator1;
	cout << fraction2;


	cout << "> ";
	if (calculator > calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator < calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator == calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator != calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator >= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator <= calculator1) { cout << "yes" << endl; }
	else cout << "no" << endl;



	Calculator calculator3;

	try {
		cin >> calculator3;
		cout << calculator3;
	}
	catch (long) {
		cout << "Your numinator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Your denominator cannot be 0!";
		exit(0);
	}

	Calculator calculator4;

	try {
		cin >> calculator4;
		cout << calculator4;
	}
	catch (long) {
		cout << "Your numinator cannot be 0!";
		exit(0);
	}
	catch (unsigned short) {
		cout << "Your denominator cannot be 0!";
		exit(0);
	}


	Calculator1 calculator5 = calculator3 + calculator4;

	cout << calculator5;

	calculator5 = calculator3 - calculator4;
	cout << calculator5;

	calculator5 = calculator3 * calculator4;
	cout << calculator5;


	cout << "> ";
	if (calculator3 > calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "< ";
	if (calculator3 < calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "== ";
	if (calculator3 == calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << ">= ";
	if (calculator3 != calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "<= ";
	if (calculator3 >= calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;
	cout << "!= ";
	if (calculator3 <= calculator4) { cout << "yes" << endl; }
	else cout << "no" << endl;

	return 0;
}