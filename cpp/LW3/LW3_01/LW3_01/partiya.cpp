#include "partiya.h"

void Partiya::VivestyInfo() const {
    cout << "����i�: " << nazva
        << ", �i���i���: " << kilkist
        << ", �i�� �� ��: " << tsina
        << ", ����: " << dataVyrob
        << ", ����i�: " << terminPrid << " ��i�\n";
}

bool Partiya::PerevirytyTermin() const {
    return terminPrid > 0;
}
