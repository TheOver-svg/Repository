//Варіант 2
#include "D2.h"
#include "D3.h"

int main() {
    setlocale(0, "UKR");
    cout << "=== Створення D2 ===" << endl;
    D2 obj1(1, 2, 3, 4);

    cout << "\n=== Створення D3 ===" << endl;
    D3 obj2(5, 6, 7, 8);

    cout << "\n=== Результат ===" << endl;
    cout << "\nОб'єкт D2:" << endl;
    obj1.show();

    cout << "\nОб'єкт D3:" << endl;
    obj2.show();

    cout << "\n=== Деструктор ===" << endl;
    return 0;
}
