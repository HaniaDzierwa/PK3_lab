// lab1sem3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

#include "Tablica.h"

int main()
{
	std::cout << "Hello World!\n";

	int dlugoscTablicy = 5;
	float* x = new float[dlugoscTablicy];
	float* y = new float[dlugoscTablicy];

	for (int i = 0; i < dlugoscTablicy; i++)
	{
		x[i] = i;
		y[i] = 5 + i;
	}


		
    Tablica* tablica1 = new Tablica(x, y, dlugoscTablicy);
	Tablica* tablica2 = new Tablica(x, y, dlugoscTablicy);

	
	Tablica tablica3(5);
	tablica3.drukuj();

	Punkt punktStatyczny(10,20);   // statycznie :))
	punktStatyczny.drukuj();

	Punkt* punktDynamiczny = new Punkt(69, 69);
	punktDynamiczny->drukuj();


	std::cout << "PRZEREWA\n\n";

	std::cout << tablica1->porownaj(*tablica2)<<std::endl;
	tablica1->dodaj(*tablica2);

	std::cout << tablica1->porownaj(*tablica2) << std::endl;
	
	
	tablica1->drukuj();





}


