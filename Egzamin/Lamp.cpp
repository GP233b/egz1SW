#include "Lamp.h"

Lamp::Lamp() {
	this->name = "";
	this->power = 0;
}

 void Lamp::aboutMe() {
	cout << "IMIE i NAZWISKO : GRZEGORZ PIASNY";
}

 Lamp::Lamp(string name, unsigned X, bool Y) {
	 this->name = name;
	 this->power = X;
	 this->isOn = Y;
 }

 
 unsigned Lamp::getPower() {
	 return power;
 }

 void Lamp::printLamp() {
	 cout << name << " " << power << " " << isOn << " " << endl;
 }

 ostream& operator<<(ostream& os, const Lamp& dt)
 {
	 os << dt.name << " " << dt.power << " " << dt.isOn;
	 return os;
 }

