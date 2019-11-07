/*******************************************************/
/*                                                     */
/*  lab_work_06_04                                     */
/*  Мова: C++                                          */
/*                                                     */
/*    Визначити чи знаходиться точка в області,        */
/*  обмеженій функціями використовуючи мову C++.       */
/*    Функції:                                         */
/*  * x = 0                                            */
/*  * y = 0                                            */
/*  * (x*x/25) + (y*y/16) = 1                          */
/*  * 4*x - 9*y - 36 = 0                               */
/*    Розгалужені процеси реалізувати командами        */
/*  if та switch.                                      */
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
	cout << "\n  Введіть змінну x: ";
	cin >> x;

	cout << "\n  Введіть змінну y: ";
	cin >> y;

	cout.precision(2);
	cout << "\n  x=" << fixed << x << "    y=" << fixed << y << "\n";

	// Визначення чи знаходиться точка в межах заштрихованої області:
	if (
		x >= 0 &&
		y <= 0 &&
		y >= -sqrt(16 - 16 * x * x / 25) &&
		x <= sqrt(25 - 25 * y * y / 16) &&
		y >= (4*x - 36) / 9
	) {
		v = 1;
	} else {
		v = 2;
	}

	// Обчислення значення складної функції:
	switch (v) {
	case 1:
		cout << "  Точка знаходиться в заштрихованій області.\n";
		break;
	case 2:
		cout << "  Точка не знаходиться в заштрихованій області.\n";
		break;
	}

	getch();

	return 0;
}