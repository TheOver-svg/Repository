#pragma once
class DataTimes
{
public:
	unsigned short int dd;
	unsigned short int mm;
	unsigned int yyyy;
public:
	DataTimes();
	DataTimes(unsigned short int d, unsigned short int m, unsigned int y);
	~DataTimes();
	void setAll(unsigned short int d, unsigned short int m, unsigned int y);
	int getYear();
	int getMounth();
	int getDay();
	DataTimes Input();
	void Print();
	DataTimes NextDay(DataTimes ob);
	DataTimes PrevDay(DataTimes ob);
	int CountDay();
};
