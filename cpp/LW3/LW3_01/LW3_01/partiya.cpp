#include "partiya.h"

void Partiya::VivestyInfo() const {
    cout << "Партiя: " << nazva
        << ", Кiлькiсть: " << kilkist
        << ", Цiна за шт: " << tsina
        << ", Дата: " << dataVyrob
        << ", Термiн: " << terminPrid << " днiв\n";
}

bool Partiya::PerevirytyTermin() const {
    return terminPrid > 0;
}
