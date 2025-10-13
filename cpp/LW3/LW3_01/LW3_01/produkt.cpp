#include "produkt.h"

void Produkt::VivestyInfo() const {
    cout << "Продукт: " << nazva
        << ", Цiна: " << tsina 
        << " грн, Дата: " << dataVyrob
        << ", Термiн: " << terminPrid << " днiв\n";
}

bool Produkt::PerevirytyTermin() const {
    return terminPrid > 0; 
}
