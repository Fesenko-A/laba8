#pragma once
#include <string>
using namespace std;

class Liquid {

protected:

	string name;	//	�����
	float density;	//	ٳ������
public:

	Liquid() {	//	����������� �� �����������
		name = "";
		density = 0;
	}

	Liquid(string n, float d) {
		name = n;
		density = d;
	}

	void setDensity(float d) {	//	������ ��� ��������
		density = d;
	}

	void printValues() {
		cout << "\n�����: " << name << "\nٳ������: " << density << endl;
	}
};