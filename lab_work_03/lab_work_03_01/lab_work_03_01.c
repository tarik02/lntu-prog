/*******************************************************/
/*                                                     */
/*  lab_work_03_01                                     */
/*  Мова: C                                            */
/*                                                     */
/*    Форматований вивід даних з використанням         */
/*  специфікаторів p, n, % засобами мови C.            */
/*    Навести приклади використання специфікаторів     */
/*  p, n, % для форматованого друку даних.             */
/*                                                     */
/*******************************************************/

#include <stdio.h>

int main() {
	int *ptr;
	int x = 12345;
	int y;

	ptr = &x;

	printf("\n  Друк адреси ptr за формтом %%p:\n");
	printf("  Значення вказівника ptr дорівнює: %p\n", ptr);

	printf("\n  Друк адреси &x за формтом %%p:\n");
	printf("  Адреса змінної x дорівнює: %p\n", &x);

	y = printf("\n  Кількість символів, які виведе цей оператор, дорівнює: ");
	printf("%d", y);

	y = printf("\n  А цей оператор виведе 37 символів\n");
	printf("  %d символів було надруковано\n", y);

	printf("\n  Друк символа %% в контрольній стрічці\n");

	return 0;
}
