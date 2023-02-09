#include "HeadLamp.h"
HeadLamp::HeadLamp() {
	this->color = "white";
	this->halfPower = true;
}


HeadLamp::HeadLamp(string name, unsigned X, bool Y, string color, bool halfPower): Lamp(name,X,Y) {
	this->color = color;
	this->halfPower = halfPower;

}
void HeadLamp::printLamp() {
	cout << name << " " << power << " " << isOn << " " << color << " " << halfPower << " " << endl;

}