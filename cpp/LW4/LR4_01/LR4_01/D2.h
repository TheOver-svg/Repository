#pragma once
#include "D1.h"

class D2 : public D1 {
    int d;
public:
    D2(int a, int b, int c, int d_) : D1(a, b, c), d(d_) {
        cout << "Створено об'єкт класу D2" << endl;
    }
    ~D2() {
        cout << "Знищено об'єкт класу D2" << endl;
    }
    void show() {
        cout << "D2: d = " << d << endl;
        D1::show();
    }
};
