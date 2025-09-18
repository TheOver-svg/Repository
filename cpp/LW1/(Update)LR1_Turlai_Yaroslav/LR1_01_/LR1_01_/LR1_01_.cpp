#include "Factory.h"
#include <tchar.h>
#include <iostream>
#include <conio.h>
using namespace std;



void print(Factory ob)
{
	cout << "Drue z funkcii: ";
	ob.printFactory();
}
int _tmain(int argc, _TCHAR* argv[])
{
	Factory chel;
	Factory *chel1;
	chel1= new Factory;
	Factory Spis[2];

	chel.setFactory("Butcher","Bill", 10);
	chel1->setFactory("Metal","Billy", 20);

	chel1->printFactory();
	chel.printFactory();

	chel1->~Factory();
	chel.~Factory();
	/*Spis[0].~Factory();
	Spis[1].~Factory();
	Spis[2].~Factory();*/
	_getch();
	return 0;
}
