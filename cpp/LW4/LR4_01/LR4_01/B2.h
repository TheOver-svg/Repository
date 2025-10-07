#pragma once
#include <iostream>
using namespace std;

class B2 {
protected:
    int y;
public:
    B2(int b) : y(b) {
        cout << "Створено об'єкт класу B2" << endl;
    }
    ~B2() {
        cout << "Знищено об'єкт класу B2" << endl;
    }
    void show() {
        cout << "B2: y = " << y << endl;
    }
};
