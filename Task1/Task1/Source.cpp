#include <iostream>
#include <time.h>
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
		int number;
		cout << "������� �����: " << endl;
		cin >> number;
		int index1 = 0, counter = 0;
		for (index = 0; index < size; index++) {
			if (number == array[index]) {
				index1 = index;
				counter++;
				break;
			}
		}
		if (counter != 0)
			cout << "������� ������� �������� �������, ������� ��������� �����: " << index1 << endl;
		else
			cout << "������ ����� � ������� �� ����������." << endl;
		delete[]array;
		cout << "������� '1', ���� ������, ����� ��������� ���������� ������. ����� ���������� ��������� ����������." << endl;
	} while (_getch() == '1');
	system("pause");
}