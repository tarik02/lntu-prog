/*******************************************************/
/*                                                     */
/*  lab_work_03_02                                     */
/*  Мова: C                                            */
/*                                                     */
/*    Вирівнювання при виведенні даних та використання */
/*  прапорців '-' '+' ' ' '#' '0' для форматованого    */
/*    Навести приклади використання способів           */
/*  вирівнювання та використання прапорців             */
/*  '-' '+' ' ' '#' '0' для форматованого виводу       */
/*  даних.                                             */
/*                                                     */
/*******************************************************/

#include <stdio.h>

int main() {
	int c = 1427;
	double p = 1427.0;

	// Друк додатніх цілих чисел
	// з одночасним вирівнюванням по правому краю:
	printf("\n%s\n%s\n",
					"  Друк додатніх цілих чисел за форматом %4d",
					"  з одночасним вирівнюванням по правому краю:");
	printf("  %4d\n", 1);
	printf("  %4d\n", 12);
	printf("  %4d\n", 123);
	printf("  %4d\n", 1234);
	printf("  %4d\n", 12345);
	printf("%s\n%s\n",
					"  В останньому випадку бракувало ширини формату -",
					"  цим пояснюється неякісне вирівнювання");

	printf("\n%s\n%s\n",
					"  Друк від'ємних цілих чисел за форматом %4d",
					"  з одночасним вирівнюванням по правому краю:");
	printf("  %4d\n", -1);
	printf("  %4d\n", -12);
	printf("  %4d\n", -123);
	printf("  %4d\n", -1234);
	printf("  %4d\n", -12345);
	printf("%s\n%s\n",
					"  В останніх двох випадках бракувало ширини формату -",
					"  цим пояснюється неякісне вирівнювання");


	// Використання у форматах прапорця (-)
	// для вирівнювання по лівому краю:
	printf("\n%s\n%s\n",
					"  Друк констант різного типу за форматами з восьми символів",
					"  з одночасним вирівнюванням по правому краю:");
	printf("  %8s%8d%8c%8f\n", "Привіт", 7, 'a', 1.23);
	printf("\n%s\n%s\n",
					"  Викристання у форматах прапорця (-) ",
					"  для вирівнювання по лівому краю:");
	printf("  %-8s%-8d%-8c%-8f\n", "Привіт", 7, 'a', 1.23);


	// Використання у форматах прапорця (+)
	// для обов'язкового другу знака чисел:
	printf("\n%s\n%s\n",
					"  Друк констант цілого типу за форматом %%d ",
					"  з одночасним вирівнюванням по правому краю:");
	printf("  %d\n  %d\n", 786, -786);
	printf("\n%s\n%s\n",
					"  Викристання у форматах прапорця (+) ",
					"  для обов'язкового друку знака чисел:");
	printf("  %+d\n  %+d\n", 786, -786);


	// Використання у форматах прапорця (#) для друку:
	// знака o - перед вісімковими числами
	// знака x - перед шістнадцятковими числами
	// крапки - в дійсьних числах
	printf("\n%s\n%s\n%s\n%s\n%s\n%s\n",
					"  Використання у форматах прапорця (#) ",
					"  для друку:",
					"  знака o - перед вісімковими числами",
					"  знака x - перед шістанадцятковими числами",
					"  знака X - перед шістанадцятковими числами",
					"  крапки - в дійсьних числах");
	printf("\n  %#o", c);
	printf("\n  %#x", c);
	printf("\n  %#X", c);
	printf("\n  %g", p);
	printf("\n  %#g\n", p);


	// Використання у форматах прапорця (0)
	//  для заповнення порожніх символів формату нулями:
	printf("\n%s\n%s\n",
					"  Використання у форматах прапорця (0) ",
					"  для заповнення порожніх символів формату нулями:");
	printf("  %+09d\n", 452);
	printf("  %09d\n", 452);

	return 0;
}
