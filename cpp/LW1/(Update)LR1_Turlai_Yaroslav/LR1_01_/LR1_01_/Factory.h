#pragma once
#include <iostream>
#include <string>
using namespace std;

class Factory
{
private:
    string name;
    string ceo;
    int employers;

public:
    Factory();                               
    Factory(string n, string c, int empl);     
    Factory(const Factory& other);           
    ~Factory();                            

    string getName();
    string getCeo();
    int getEmployers();

    void setFactory(string n, string c, int empl);
    void setName(string n);
    void setCeo(string c);
    void setEmployers(int empl);

    void printFactory();
};
