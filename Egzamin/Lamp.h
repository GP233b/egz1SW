#include <iostream>

using namespace std;

#pragma once
class Lamp{
protected:
	string name;
	unsigned power;
	bool isOn = false;
public:
	Lamp();
	Lamp(string name, unsigned X, bool Y);
	unsigned getPower();
	static void aboutMe();

	virtual void printLamp();

	void turnOn();
	void turnOff();

	friend ostream& operator<<(ostream& A ,const Lamp & obj);
}; 

