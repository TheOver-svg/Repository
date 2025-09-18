
#include "DataTimes.h"
#include <iostream>
using namespace std;

DataTimes::DataTimes() :dd(1), mm(1), yyyy(2009) {};

DataTimes::DataTimes(unsigned short int d = 1, unsigned short int m = 1, unsigned int y = 2009)
{
}


DataTimes::~DataTimes(void)
{
}

void DataTimes::setAll(unsigned short int d, unsigned short int m, unsigned int y)
{
	dd = d;
	mm = m;
	yyyy = y;
}

int DataTimes::getYear()
{
	return yyyy;
}

int DataTimes::getMounth()
{
	return mm;
}

int DataTimes::getDay()
{
	return dd;
}

DataTimes DataTimes::Input()
{
	setlocale(0, "UKR");
	cout << "Введiть рiк:";
	cin >> yyyy;
	cout << "Введiть мiсяць:";
	cin >> mm;
	if (mm <= 12 && mm > 0)
	{
		cout << "Введiть день:";
		cin >> dd;
		if (dd > 0 && dd <= 31)
		{
			setlocale(0, "");
			return DataTimes(dd, mm, yyyy);
		}
		else
		{
			cout << "Введено не коректний день!"<<endl;
			exit(0);
		}
	}
	else
	{
		cout << "Введено не коректний мiсяць!" << endl;
		exit(0);
	}
}

DataTimes DataTimes::NextDay(DataTimes ob)
{
	this->dd = ob.dd;
	this->mm = ob.mm;
	this->yyyy = ob.yyyy;
	this->dd++;
	if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12))
	{
		if (dd > 31) { dd = 1; mm++; }
	}
	else
	{
		if ((mm == 4) || (mm == 6) || (mm == 9) || (mm == 11))
		{
			if (dd > 30) { dd = 1; mm++; }
		}
		else
		{
			if (((yyyy % 4 == 0) && (yyyy % 100 != 0)) || ((yyyy % 4 == 0) && (yyyy % 100 != 0) && (yyyy % 400 == 0)))
			{
				if (dd > 29)
				{
					dd = 1; mm++;
				}
			}
			else
			{
				if (dd > 28)
				{
					dd = 1; mm++;
				}
			}
		}
	}
	if (mm > 12) {
		mm = 1;
		yyyy++;
	}
	return DataTimes(dd, mm, yyyy);
}

DataTimes DataTimes::PrevDay(DataTimes ob)
{
	this->dd = ob.dd;
	this->mm = ob.mm;
	this->yyyy = ob.yyyy;
	this->dd--;
	if ((mm == 1) || (mm == 3) || (mm == 5) || (mm == 7) || (mm == 8) || (mm == 10) || (mm == 12))
	{
		if (dd < 0) {
			dd = 30; mm--;
			if (((yyyy % 4 == 0) && (yyyy % 100 != 0) && (mm == 2)) || ((yyyy % 4 == 0) && (yyyy % 100 != 0) && (yyyy % 400 == 0) && (mm == 2)))
			{
				if (dd < 1)
				{
					dd = 29;
				}
			}
			else
			{
				if (dd < 1)
				{
					dd = 28;
				}
			}
		}
	}
	else
	{
		if ((mm == 2) || (mm == 4) || (mm == 6) || (mm == 9) || (mm == 11))
		{
			if (dd < 0) { dd = 31; mm--; }
		}
	}
	if ((dd < 1) && (mm == 1)) {
		dd = 31;
		mm = 12;
		yyyy--;
	}
	return DataTimes(dd, mm, yyyy);
}

int DataTimes::CountDay()
{
	switch (mm)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12: { return 31 - dd; break; };
	case 4:case 6:case 9:case 11: { return 30 - dd; break; }
	case 2:
	{
		if (((yyyy % 4 == 0) && (yyyy % 100 != 0) && (mm == 2)) || ((yyyy % 4 == 0) && (yyyy % 100 != 0) && (yyyy % 400 == 0) && (mm == 2)))
			return 29 - dd; else return 28 - dd;
		break;
	}
	default: break;
	}
}

void DataTimes::Print() {
	printf("%02d.%02d.%04d\n", dd, mm, yyyy);
}
