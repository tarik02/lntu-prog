﻿/*******************************************************/
/*                                                     */
/*  lab_work_07_04                                     */
/*  Мова: C++                                          */
/*                                                     */
/*    Табулювання функції на інтервалі засобами мови   */
/*  C++. Обчислити всі значення функції                */
/*  y = (pow(cos(a*x), 2) + exp(-a*x)) /            */
/*    (pi*2 - atan(sqrt(b) + sqrt(x))), аргумент x     */
/*  якої змінюється на інтервалі [0.6;0.8] з кроком    */
/*  h=0.02, a=1.3, b=0.75                              */
/*  Обчислити також:                                   */
/*   * кількість значень y<2.75                        */
/*   * кількість значень y>2.75                        */
/*  Циклічні процеси реалізувати командою for.         */
/*                                                     */
/*******************************************************/

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;

#define pi 3.14159f

int main() {
	float a = 1.3f;
	float b = 0.75f;

	float x;      // Аргумент функції
	float y;      // Значення функції
	int k1 = 0;   // кількість значень y<2.75
	int k2 = 0;   // кількість значень y>2.75

	clrscr();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout.precision(2);

	// Табулювання функції на заданому інтервалі
	// з одночасним обчисленням кількісті k та суми s:
	cout << "\n  Результати табулювання функції:\n";

	for (x = 0.6f; x <= 0.8f; x += 0.02f) {
		y = (pow(cos(a*x), 2) + exp(-a*x)) / (pi*2 - atan(sqrt(b) + sqrt(x)));
		cout << fixed << showpos;
		cout << "  x=" << setw(4) << x;
		cout << " y=" << setw(4) << y << "\n";

		if (y < 2.75f) {
			++k1;
		}
		if (y > 2.75f) {
			++k2;
		}
	}

	cout << "\n  Обробка результатів табулювання функції:\n";

	if (k1 > 0) {
		cout << noshowpos << setw(3);
		cout << "\n  Кількість значень функції y < 2.75: k1=" << setw(3) << k1;
	} else {
		cout << "\n  Значень функції y < 2.75 немає\n";
	}

	if (k2 > 0) {
		cout << noshowpos << setw(3);
		cout << "\n  Кількість значень функції y > 2.75: k2=" << setw(3) << k1;
	} else {
		cout << "\n  Значень функції y > 2.75 немає\n";
	}

	getch();

	return 0;
}