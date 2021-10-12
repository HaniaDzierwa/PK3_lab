#pragma once


#include "Punkt.h" 
class Tablica : public Punkt
{
	Punkt* w;
	int dlugoscTab;

public:
	Tablica(int dlugoscTab = 0);  //tworzy tablice o zadanej dlugosci i wypelnia punktami (0,0);

	Tablica(Tablica& w); // inicjalizacja za pomoca tablicy w 
	Tablica(float *x, float *y, int dlugoscTab);   // inicjalizacaj tablicy punktow tablicami x-ow i y-ow 


	~Tablica();

	void dodaj(Tablica& w); // dodaj do siebie wartosci w tablicach 

	bool porownaj(Tablica &w); // porownanie z Tablica w

	void drukuj();
};
