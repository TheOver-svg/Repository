#pragma once
#include "tovar.h"
#include "produkt.h"

class Komplekt : public Tovar {
    string nazva;
    double tsina;
    Produkt produkty[3]; 
    int kilkist;

public:
    Komplekt(string n = "", double t = 0, Produkt arr[] = nullptr, int k = 0);

    void VivestyInfo() const override;
    bool PerevirytyTermin() const override;
};
