#pragma once
#include "tovar.h"

class Produkt : public Tovar {
protected:
    string nazva;
    double tsina;
    string dataVyrob;
    int terminPrid; 

public:
    Produkt(string n = "", double t = 0, string d = "", int term = 0)
        : nazva(n), tsina(t), dataVyrob(d), terminPrid(term) {
    }

    void VivestyInfo() const override;
    bool PerevirytyTermin() const override;
};
