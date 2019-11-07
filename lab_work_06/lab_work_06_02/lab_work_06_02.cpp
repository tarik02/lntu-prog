/*******************************************************/
/*                                                     */
/*  lab_work_06_02                                     */
/*  Мова: C++                                          */
/*                                                     */
/*    Обчислення значення складної функції засобами    */
/*  мови C++.                                          */
/*    Обчислити значення складної функції y:           */
/*  y = x*x - 2*x + 1, якщо       x < -1               */
/*  y = sin(3 * x),    якщо -1 <= x <  1               */
/*  y = 1 / x,         якщо       x >  4               */
/*  не існує,          в інших випадках.               */
/*    Розгалужені процеси реалізувати командою switch. */
/*                                                     */
/*******************************************************/

#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;

int main() {
	float x;  // Аргумент функції
	float y;  // Значення функції
	int   v;  // Варіант обчислення функції

	clrscr();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Ввід значення аргумента:
	cout << "\n  Введіть значення аргумента: ";
	cin >> x;

	// Вибір варіанта:
	if (x < -1) {
		v = 1;
	} else if (x >= -1 && x <= 1) {
		v = 2;
	} else if (x > 4) {
		v = 3;
	} else {
		v = 4;
	}

	// Обчислення значення складної функції:
	cout.precision(2);
	switch (v) {
	case 1:
		y = x*x - 2*x + 1;
		cout << "  x=" << fixed << x << "    y=" << fixed << y << "\n";
		break;
	case 2:
		y = sin(3 * x);
		cout << "  x=" << fixed << x << "    y=" << fixed << y << "\n";
		break;
	case 3:
		y = 1 / x;
		cout << "  x=" << fixed << x << "    y=" << fixed << y << "\n";
		break;
	case 4:
		cout << "  x=" << fixed << x << "    функція не існує.\n";
		break;
	}

	getch();

	return 0;
}