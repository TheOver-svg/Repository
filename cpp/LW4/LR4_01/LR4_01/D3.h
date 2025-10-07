#pragma once
#include "D1.h"

class D3 : private D1 {
    int e;
public:
    D3(int a, int b, int c, int e_) : D1(a, b, c), e(e_) {
        cout << "�������� ��'��� ����� D3" << endl;
    }
    ~D3() {
        cout << "������� ��'��� ����� D3" << endl;
    }
    void show() {
        cout << "D3: e = " << e << endl;
        D1::show();
    }
};
