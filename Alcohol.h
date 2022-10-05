#pragma once
#include <string>
using namespace std;

class Alcohol : public Liquid {

	float strength;	//	Міцність
public:

	Alcohol() {
		strength = 0;
		name = "";
		density = 0;
	}

	Alcohol(string n, float d, float s) {
		name = n;
		density = d;
		strength = s;
	}
	
	void setStrength(float s) {	//	Сеттер для міцності
		strength = s;
	}

	void printValues() {
		cout << "\nНазва: " << name << "\nЩільність: " << density << "\nМіцність: " << strength << endl;
	}
};