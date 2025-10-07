//Варіант 2
#include "D2.h"
#include "D3.h"

int main() {
    setlocale(0, "UKR");
    cout << "=== D2 ===" << endl;
    D2 obj1(1, 2, 3, 4);
    obj1.show();

    cout << "\n=== D3 ===" << endl;
    D3 obj2(5, 6, 7, 8);
    obj2.show();

    return 0;
}
