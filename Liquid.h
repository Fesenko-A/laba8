#pragma once
#include <string>
using namespace std;

class Liquid {

protected:

	string name;	//	Назва
	float density;	//	Щільність
public:

	Liquid() {	//	Конструктор за замовченням
		name = "";
		density = 0;
	}

	Liquid(string n, float d) {
		name = n;
		density = d;
	}

	void setDensity(float d) {	//	Сеттер для щільності
		density = d;
	}

	void printValues() {
		cout << "\nНазва: " << name << "\nЩільність: " << density << endl;
	}
};