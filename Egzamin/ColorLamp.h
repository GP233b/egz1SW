#pragma once
#include "Lamp.h"
class ColorLamp :    public Lamp{
	double red;
	double green;
	double blue;
public:
	ColorLamp();
	ColorLamp(string name, unsigned num, bool B ,double X, double Y, double Z);
	void printLamp() override;
	

};

