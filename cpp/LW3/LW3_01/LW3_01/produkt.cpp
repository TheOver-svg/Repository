#include "produkt.h"

void Produkt::VivestyInfo() const {
    cout << "�������: " << nazva
        << ", �i��: " << tsina 
        << " ���, ����: " << dataVyrob
        << ", ����i�: " << terminPrid << " ��i�\n";
}

bool Produkt::PerevirytyTermin() const {
    return terminPrid > 0; 
}
