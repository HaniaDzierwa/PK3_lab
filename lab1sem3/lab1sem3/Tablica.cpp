#pragma once
#include "Tablica.h"

using namespace std;

Tablica::Tablica(int dlugoscTab)
{
	this->dlugoscTab = dlugoscTab;

	this->w = new Punkt  [this->dlugoscTab];   // stworzylam tablice :D


}

Tablica::Tablica(Tablica& w)
{
	this-> w = w.w;    // w.w pierwsze w to nazwa tablicy a drugie w to jej skladowa :}
	this->dlugoscTab = w.dlugoscTab;
}

Tablica::Tablica(float *x, float *y, int  dlugoscTab) : dlugoscTab(dlugoscTab)
{
	this->w = new Punkt[this->dlugoscTab];

	for (int i = 0; i < dlugoscTab; i++)
	{

		w[i] =  Punkt (x[i], y[i]);

	}

}



void Tablica::dodaj(Tablica& w)
{
	// dodawanie elementoew DWOCH TABLIC DO SIEBIE 

	//W TO TABLICA PUNKTOW

	// zalozenie tablicwe sa takie same
	for (int i = 0; i < dlugoscTab; i++)
	{
		this->w[i].dodaj(w.w[i]);
	
	}

	// a gdyby nie byly to :



}

void Tablica::drukuj()
{

	for (int i = 0; i < dlugoscTab; i++)
	{
		this->w[i].drukuj();
	}
	cout << endl;
}


bool Tablica::porownaj(Tablica &w)    // porownaj czy takie same
{
	// zalozenie, tablice sa takiej samej dlugosci 

	

	for (int i = 0; i < dlugoscTab; i++)
	{
		if (!(this->w[i] == w.w[i]))
		 return  false;	
	}
	return true; 


}




Tablica::~Tablica()
{
	delete this->w;
}
