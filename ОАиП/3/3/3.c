#include <stdio.h>
int main() 
{                                                 // Начало главной функции
	float a, b, c;                                // Объявление переменных a, b, c
	printf("vvedite chisla\n");
	scanf_s("%f %f %f", &a, &b, &c);              // Ввод переменных a, b, c
	int a1 = a, b1 = b, c1 = c;                   // Объявление переменных a1, b1, c1
	if (a1 == a)
		printf("%f is integer\n", a);
	else
		printf("%f is not integer\n", a);
	if (b1 == b)
		printf("%f is integer\n", b);
	else
		printf("%f is not integer\n", b);
	if (c1 == c)
		printf("%f is integer\n", c);
	else
		printf("%f is not integer\n", c);
	return 0;
}