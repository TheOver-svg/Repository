#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
protected:
    int z;
public:
    D1(int a, int b, int c) : B1(a), B2(b), z(c) {}
    void show() {
        cout << "D1: z = " << z << endl;
        cout << "Через public наслiдування B2: ";
        B2::show();
        cout << "Через private наслiдування B1: ";
        B1::show();
    }
};
