#include "DataTimes.h"
#include "tchar.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	setlocale(LC_ALL, "");
	cout << "����i�� �i���i��� ��'���i�:";
	cin >> n;
	DataTimes ob[100];
	for (int i = 0; i < n; i++)
	{
		cout << "����i�� ��'��� �" << i + 1 << "\n";
		ob[i].Input();
		cout << "�i���i��� ��i� �� �i��� �i���� = " << ob[i].CountDay() << "\n";
		DataTimes tmp;
		tmp.PrevDay(ob[i]);
		cout << "���� ������������ ���:";
		tmp.Print();
		tmp.NextDay(ob[i]);
		cout << "���� ���������� ���:";
		tmp.Print();
	}
	setlocale(LC_ALL, "");
	system("pause");
	return 0;
}
