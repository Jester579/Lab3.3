/*
Lab_03.3
Демчука Максима
Лабораторна робота № 3.3
Розгалуження, задане графіком функції
Варіант 5
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

	cout << "Введіть x: " << endl; cin >> x;
	cout << "Введіть R: " << endl; cin >> R;

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

	           

	cout << "Результат = " << y << endl;

	return 0;
}
