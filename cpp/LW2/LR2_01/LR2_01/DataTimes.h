#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class DataTimes
{
public:
    unsigned short int dd;
    unsigned short int mm;
    unsigned int yyyy;

public:

    DataTimes();
    DataTimes(unsigned short int d, unsigned short int m, unsigned int y);
    explicit DataTimes(const string& str); 
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
    bool operator!() const;
    operator bool() const;
    bool operator&(const DataTimes& other) const;
    operator string() const;
};
