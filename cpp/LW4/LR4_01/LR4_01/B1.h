#pragma once
#include <iostream>
using namespace std;

class B1 {
protected:
    int x;
public:
    B1(int a) : x(a) {}
    void show() {
        cout << "B1: x = " << x << endl;
    }
};
