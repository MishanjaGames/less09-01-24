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
	Computer(string name, float frequency, int ram_cap, bool DVD_ROM, float cost) {}
	int getRAM() const {}
	void show() const {}
};