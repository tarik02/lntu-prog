/*******************************************************/
/*                                                     */
/*  lab_work_02_03                                     */
/*  Мова: C                                            */
/*                                                     */
/*    Дано: x, y, z - змінні дійсьного типу.           */
/*    Обчислити значення виразів a=f1(x, y, z) та      */
/*  b = f2(x, y, z). Вивести на друк вхідні велечини і */
/*  результати обчислень, у тому числі значення        */
/*  проміжних величин, у вигляді таблиці.              */
/*                                                     */
/*******************************************************/

#include <stdio.h>
#include <math.h>

#define pi 3.14159f
#define e 2.71828f

int main() {
	float x, y, z;
	float a1, a2, a3, a4, a5, a6, a;
	float b1, b2, b3, b4, b5, b6, b;

	// Ввід заданих величин:
	printf("  Введіть значення трьох дійсьних змінних (x, y, z):\n    ");
	scanf("%f%f%f", &x, &y, &z);

	// Обчислення виразу a:
	a1 = log(1 + fabs(x * y * z));
	a2 = pow(sin(z), 2);
	a3 = pi + a2 - 4.01 * y + a1;
	a4 = pow(e, -x / 2);
	a5 = sqrt(25.05 + a4 + 0.1*y*y + z*z);
	a6 = atan(z / 4) + a5;
	a = pow(sin(a3 / a6), 2);

	// Обчислення виразу b:
	b1 = (2*x - 3.4) / (pow(y, 2) + 1);
	b2 = 1.0 / 3 + pow(cos(x + y), 2);
	b3 = 2*z - pow(x, 2);
	b4 = 1 + fabs(x - y);
	b5 = 4.9 * pow(b2 * b3 / b4, 3);
	b6 = pow(e, -x) * log(2 + fabs(x));
	b = b1 + b5 + b6;

	// Друк результатів у вигляді таблиці:
	printf("\n  Вхідні величини та результати обчислень:");
	printf("\n  I-------------------------------------------I");
	printf("\n  I             Вхідні  величини:             I");
	printf("\n  I-------------------------------------------I");
	printf("\n  I         x=         I        %5.2f         I", x);
	printf("\n  I-------------------------------------------I");
	printf("\n  I         y=         I        %5.2f         I", y);
	printf("\n  I-------------------------------------------I");
	printf("\n  I         z=         I        %5.2f         I", z);
	printf("\n  I-------------------------------------------I");
	printf("\n  I             Результати обчислень:         I");
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a1=  I    %5.2f   I    b1=  I   %5.2f    I", a1, b1);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a2=  I    %5.2f   I    b2=  I   %5.2f    I", a2, b2);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a3=  I    %5.2f   I    b3=  I   %5.2f    I", a3, b3);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a4=  I    %5.2f   I    b4=  I   %5.2f    I", a4, b4);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a5=  I    %5.2f   I    b5=  I   %5.2f    I", a5, b5);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a6=  I    %5.2f   I    b6=  I   %5.2f    I", a6, b6);
	printf("\n  I-------------------------------------------I");
	printf("\n  I  a =  I    %5.2f   I    b =  I   %5.2f    I", a, b);
	printf("\n  I-------------------------------------------I");

	return 0;
}
