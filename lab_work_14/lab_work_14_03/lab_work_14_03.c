/*******************************************************/
/*                                                     */
/*  lab_work_14_03                                     */
/*  Мова: C                                            */
/*                                                     */
/*  Формування чисел Фібоначчі за реекурсивною схемою. */
/*    Сформувати перші k (k задано) чисел Фібоначчі,   */
/*  використовуючи функцію користувача, звернення до   */
/*  якої відбувається рекурсивно.                      */
/*                                                     */
/*******************************************************/

#include <stdio.h>

long fib(int n);

int main() {
	long fi;
	int i, j, k;

	// Ввід кількості чисел k (нумерація з нуля):
	printf("\n  Ввести довільне натуральне число k >= 0: ");
	scanf("%d", &k);

	for (i = 0; i <= k; ++i) {
		fi = fib(i);
		printf("\n  Число Фібоначчі за номером i=%d дорівнює: %ld", i, fi);
	}

	printf("\n");

	return 0;
}

//-------------------------------------------------------
long fib(int n) {
	if (n == 0 || n == 1) {
		return n;
	} else {
		return fib(n - 2) + fib(n - 1);
	}
}