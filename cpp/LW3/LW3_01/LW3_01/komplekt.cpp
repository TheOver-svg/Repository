#include "komplekt.h"

Komplekt::Komplekt(string n, double t, Produkt arr[], int k) {
    nazva = n;
    tsina = t;
    kilkist = k;
    for (int i = 0; i < k && i < 3; i++)
        produkty[i] = arr[i];
}

void Komplekt::VivestyInfo() const {
    cout << "Комплект: " << nazva << ", Цiна: " << tsina << endl;
    cout << "Склад:\n";
    for (int i = 0; i < kilkist; i++)
        produkty[i].VivestyInfo();
}

bool Komplekt::PerevirytyTermin() const {
    for (int i = 0; i < kilkist; i++)
        if (!produkty[i].PerevirytyTermin())
            return false;
    return true;
}
