/*
Lab_03.3
������� �������
����������� ������ � 3.3
������������, ������ �������� �������
������ 5
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double R;
	double y;

	cout << "������ x: " << endl; cin >> x;
	cout << "������ R: " << endl; cin >> R;

	if (x < -2)
		y = 3 + x;
	else
		if (-2 <= x && x < 4)
			y = -1. / 2. * x;
		else
			if (4 <= x && x <= 8 - R)
				y = -R;
			else
				if (8 - R < x && x <= 8 + R)
					y = - sqrt(R * R - pow(x - 8, 2));
				else
					y = -R;

	           

	cout << "��������� = " << y << endl;

	return 0;
}
