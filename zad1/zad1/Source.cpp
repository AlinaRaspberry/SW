#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� �����: ";
	long long int celoeChislo;
	cin >> celoeChislo;
	celoeChislo = abs(celoeChislo);
	cout << "����� ������� �����: " << endl;
	while (celoeChislo > 1 or celoeChislo < -1)
	{
		int ostatok;
		ostatok = celoeChislo % 10;
		celoeChislo = celoeChislo / 10;
		cout << ostatok << endl;
	}
	system("pause");
	return 0;
}