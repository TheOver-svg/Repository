#include "produkt.h"
#include "partiya.h"
#include "komplekt.h"

int main() {
    setlocale(0, "UKR");
    const int N = 3;
    Tovar* baza[N];

    baza[0] = new Produkt("������", 35.5, "10.10.2025", 3);
    baza[1] = new Partiya("������", 25.0, "09.10.2025", -1, 20);

    Produkt mas[2] = {
        Produkt("��i�", 20.0, "12.10.2025", 2),
        Produkt("�����", 55.0, "05.10.2025", -2)
    };
    baza[2] = new Komplekt("��i�����", 70.0, mas, 2);

    cout << "=== ��i ������ ===\n";
    for (int i = 0; i < N; i++)
        baza[i]->VivestyInfo();

    cout << "\n=== ����������i ===\n";
    for (int i = 0; i < N; i++)
        if (!baza[i]->PerevirytyTermin())
            baza[i]->VivestyInfo();

    for (int i = 0; i < N; i++)
        delete baza[i];

    return 0;
}
