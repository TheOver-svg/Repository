#pragma once
#include "D1.h"

class D2 : public D1 {
    int d;
public:
    D2(int a, int b, int c, int d_) : D1(a, b, c), d(d_) {}
    void show() {
        cout << "D2: d = " << d << endl;
        D1::show();
    }
};
