#pragma once
#include <iostream>
using namespace std;

class B1 {
protected:
    int x;
public:
    B1(int a) : x(a) {
        cout << "�������� ��'��� ����� B1" << endl;
    }
    ~B1() {
        cout << "������� ��'��� ����� B1" << endl;
    }
    void show() {
        cout << "B1: x = " << x << endl;
    }
};
