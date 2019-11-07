﻿/*******************************************************/
/*                                                     */
/*  lab_work_05_02                                     */
/*  Мова: C                                            */
/*                                                     */
/*    Обчислення значення складної функції засобами    */
/*  мови C.                                            */
/*    Обчислити значення складної функції y:           */
/*  y = x*x - 2*x + 1, якщо       x < -3               */
/*  y = sin(3 * x),    якщо -1 <= x <  2               */
/*  y = 1 / x,         якщо       x >  2               */
/*  не існує,          в інших випадках.               */
/*    Розгалужені процеси реалізувати командою ?.      */
/*                                                     */
/*******************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

#define pi 3.14159f

int main() {
	float x;  // Аргумент функції
	float y;  // Значення функції

	clrscr();
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Ввід значення аргумента:
	printf("\n  Введіть значення аргумента: ");
	scanf("%f", &x);

	// Обчислення значення складної функції:
	(x < -3) ? y = x*x - 2*x + 1,                     // Перша гілка
		printf("  x=%4.2f    y=%4.2f\n", x, y) :

	((y >= -1) && (x < 2)) ? y = sin(3 * x),          // Друга гілка
		printf("  x=%4.2f    y=%4.2f\n", x, y) :

	(x > 4) ? y = 1 / x,                              // Третя гілка
		printf("  x=%4.2f    y=%4.2f\n", x, y) :

		printf("  x=%4.2f    функція не існує.\n", x);  // Четверта гілка

	getch();

	return 0;
}