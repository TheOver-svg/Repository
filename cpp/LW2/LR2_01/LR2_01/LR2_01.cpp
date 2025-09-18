#include "DataTimes.h"
#include "tchar.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int n;
    setlocale(LC_ALL, "");
    cout << "¬ведiть кiлькiсть об'Їктiв:";
    cin >> n;
    DataTimes ob[100];
    for (int i = 0; i < n; i++)
    {
        cout << "¬ведiть об'Їкт є" << i + 1 << "\n";
        ob[i].Input();
        cout << " iлькiсть днiв до кiнц€ мiс€ц€ = " << ob[i].CountDay() << "\n";

        DataTimes tmp;
        tmp.PrevDay(ob[i]);
        cout << "ƒата попереднього дн€:";
        tmp.Print();

        tmp.NextDay(ob[i]);
        cout << "ƒата наступного дн€:";
        tmp.Print();

        if (!ob[i]) cout << "ƒата не останн≥й день мiс€ц€\n";
        else cout << "ƒата Ї останнiм днем мiс€ц€\n";
        if (ob[i]) cout << "÷е 1 сiчн€!\n";
        else cout << "÷е не 1 сiчн€.\n";
        if (i > 0) {
            if (ob[i] & ob[i - 1])
                cout << "÷€ дата однакова з попередньою\n";
            else
                cout << "÷€ дата ≥нша\n";
        }
        string s = ob[i];
        cout << "ѕеретворенн€ в string: " << s << "\n";
    }

    system("pause");
    return 0;
}
