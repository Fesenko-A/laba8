#include <iostream>
#include <windows.h>
#include "Liquid.h"
#include "Alcohol.h"
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Liquid voda("Вода", 997);
	Alcohol spirt("Спирт", 789, 60);

	voda.printValues();
	spirt.printValues();

	cout << endl;

	voda.setDensity(1013);
	spirt.setStrength(70);

	voda.printValues();
	spirt.printValues();

	return 0;
}