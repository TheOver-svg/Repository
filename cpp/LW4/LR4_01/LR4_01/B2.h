#pragma once
#include <iostream>
using namespace std;

class B2 {
protected:
    int y;
public:
    B2(int b) : y(b) {}
    void show() {
        cout << "B2: y = " << y << endl;
    }
};
