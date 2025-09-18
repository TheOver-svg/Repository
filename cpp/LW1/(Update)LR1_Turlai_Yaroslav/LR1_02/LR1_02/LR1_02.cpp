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
	}
	setlocale(LC_ALL, "");
	system("pause");
	return 0;
}
