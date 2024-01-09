#pragma once
#include <iostream>
#include<string>
using namespace std;
class Computer
{
	string name;
	float frequency;
	int ram_cap;
	bool DVD_ROM;
	float cost;
public:
	Computer(string name, float frequency, int ram_cap, bool DVD_ROM, float cost){
		setRam(ram_cap);
		setName(name);
		setFrequency(frequency);
		hasDVD(DVD_ROM);
		setCost(cost);
	}

	void setName(string name) { this->name = name; }
	void setFrequency(float frequency) { this->frequency = frequency; }
	void setRam(int ram_cap) { this->ram_cap = ram_cap; }
	void hasDVD(bool DVD_ROM) { this->DVD_ROM = DVD_ROM; }
	void setCost(float cost) { this->cost = cost; }

	int getRAM() const { return ram_cap; }

	void show() const {
		cout << "Name " << name << endl;
		cout << "Frequency " << frequency << endl;
		cout << "Ram " << ram_cap << endl;
		cout << "DVD " << DVD_ROM << endl;
		cout << "Cost " << cost << endl;
	}
};