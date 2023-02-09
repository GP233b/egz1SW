#include "ColorLamp.h"

ColorLamp::ColorLamp() {
	this->blue = 0;
	this->green = 0;
	this->red = 0;
}

ColorLamp::ColorLamp(string name, unsigned num, bool B, double X, double Y, double Z) : Lamp(name , num ,B) {
	this->red = X;
	this->green = Y;
	this-> blue = Z;
}
void ColorLamp::printLamp() {
	cout << name << " " << power << " " << isOn << " " << red << " " << green << " " << blue << " " << endl;

}