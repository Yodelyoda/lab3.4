// Lab_03_4.cpp
// < ������������� ����� >
// ����������� ������ No 3.4
// ������������, ������ ������� �������.
// ������ 16
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// ������������ � ����� ����
	if ((y <= x && y > 0) ||
		(y <= pow(x,2) && y >= -x && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}