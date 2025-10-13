#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tovar {
public:
    virtual void VivestyInfo() const = 0;
    virtual bool PerevirytyTermin() const = 0;
    virtual ~Tovar() {}
};
