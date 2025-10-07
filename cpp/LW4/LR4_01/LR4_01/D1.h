#pragma once
#include "B1.h"
#include "B2.h"

class D1 : private B1, public B2 {
protected:
    int z;
public:
    D1(int a, int b, int c) : B1(a), B2(b), z(c) {
        cout << "Створено об'єкт класу D1" << endl;
    }
    ~D1() {
        cout << "Знищено об'єкт класу D1" << endl;
    }
    void show() {
        cout << "D1: z = " << z << endl;
        cout << "  -> ";
        B1::show();
        cout << "  -> ";
        B2::show();
    }
};
