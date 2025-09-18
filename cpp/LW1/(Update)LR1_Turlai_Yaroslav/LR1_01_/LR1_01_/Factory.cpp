#include "Factory.h"
#include <string>

Factory::Factory(){}

Factory::Factory(string n, string c, int empl) {

}

Factory::Factory(const Factory& other)
{
    name = other.name;
    ceo = other.ceo;
    employers = other.employers;
}

Factory::~Factory() {

}


string Factory::getName()
{
    return name;
}

string Factory::getCeo()
{
    return ceo;
}

int Factory::getEmployers()
{
    return employers;
}

void Factory::setFactory(string n, string c, int empl)
{
    name = n;
    ceo = c;
    employers = empl;
}

void Factory::setName(string n)
{
    name = n;
}

void Factory::setCeo(string c)
{
    ceo = c;
}

void Factory::setEmployers(int empl)
{
    employers = empl;
}

void Factory::printFactory()
{
    cout << "Factory name: " << (name.length() != 0 ? name : "NULL")
        << ", CEO: " << (ceo.length() ? ceo : "NULL")
        << ", Employers: " << employers << endl;
}
