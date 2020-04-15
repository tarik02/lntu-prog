/*******************************************************/
/*                                                     */
/*  lab_work_09_04                                     */
/*  Мова: C++                                          */
/*                                                     */
/*    Підрахувати кількість цифр у заданому            */
/*  натуральному числі.                                */
/*    Циклічні процеси реалізувати командою do.        */
/*                                                     */
/*******************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;      // число
	int i;
	int k = 0;  // кількість цифр у числі

	cout << "Введіть число n: ";
	cin >> n;

	i = n;
	do {
		++k;
		i /= 10;
	} while (i != 0);

	cout << "Кількість цифр у числі " << n << ": " << k << "\n";

	return 0;
}
