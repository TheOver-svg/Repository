#pragma once
#include "produkt.h"

class Partiya : public Produkt {
    int kilkist;
public:
    Partiya(string n = "", double t = 0, string d = "", int term = 0, int k = 0)
        : Produkt(n, t, d, term), kilkist(k) {
    }

    void VivestyInfo() const override;
    bool PerevirytyTermin() const override;
};
