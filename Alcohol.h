#pragma once
#include <string>
using namespace std;

class Alcohol : public Liquid {

	float strength;	//	̳�����
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
	
	void setStrength(float s) {	//	������ ��� ������
		strength = s;
	}

	void printValues() {
		cout << "\n�����: " << name << "\nٳ������: " << density << "\n̳�����: " << strength << endl;
	}
};