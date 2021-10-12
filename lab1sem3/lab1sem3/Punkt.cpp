#include "Punkt.h"

void Punkt::dodaj(Punkt& p)
{
	x += p.x;
	y += p.y;
}

void Punkt::dodaj(Punkt* p)
{
	x += p->x;
	y += p->y;
}

void Punkt::drukuj()
{
	std::cout << x << " " << y << " \n";

}