


#pragma once
#include <iostream>

class Punkt
{
	float x, y;
public:


	Punkt(Punkt& p) {
		x = p.x;
		y = p.y;

	}

	Punkt(float _x = 0, float _y = 0) : x(_x), y(_y) {};//=0 to znaczy ze jest to wartosc domyslna :))

	void dodaj(Punkt& p); // dodaje do siebie wspolrzedne p 
	void dodaj(Punkt* p);
	void drukuj();

	bool operator==(const Punkt& punkcik) { return punkcik.x == this->x && punkcik.y == y; }
};


