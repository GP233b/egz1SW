#pragma once
#include "Lamp.h"
class HeadLamp :public Lamp{
	string color;
	bool halfPower;
public:
	HeadLamp();
	HeadLamp(string name, unsigned X, bool Y,string color , bool halfPower);

	void printLamp() override;
};

