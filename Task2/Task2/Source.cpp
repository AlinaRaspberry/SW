#include <iostream>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	do {
		setlocale(LC_ALL, "RUS");
		srand(time(0));
		int size;
		do {
			cout << "������� ������ �������: ";
			cin >> size;
		} while (size < 1);
		int* array = new int[size];
		int index;
		for (index = 0; index < size; index++) {
			array[index] = rand() % 21 - 10;
			cout << setw(4) << array[index];
		}
		cout << endl;
		cout << "����� �������, ������� ������ �������� ���� ����������: " << endl;
		for (index = 2; index < size; index++) {
			if (array[index] < array[index-1]-array[index-2]) {
				cout << array[index] << setw(4);
			}
		}
		cout << endl;
		delete[]array;
		cout << "������� '1', ���� ������, ����� ��������� ���������� ������. ����� ���������� ��������� ����������." << endl;
	} while (_getch() == '1');
	system("pause");
	return 0;
}