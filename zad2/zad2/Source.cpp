#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ��� ������" << endl;
	int nomerDnya;
	cin >> nomerDnya;
	switch (nomerDnya)
	{
	case 1: cout << "�����������" << endl; break;
	case 2: cout << "�������" << endl; break;
	case 3: cout << "�����" << endl; break;
	case 4: cout << "�������" << endl; break;
	case 5: cout << "�������" << endl; break;
	case 6: cout << "�������" << endl; break;
	case 7: cout << "�����������" << endl; break;
	default: cout << "����� �������� ����� ��� ������" << endl;
	}
	return 0;
}