#include <stdio.h>
#include <math.h>
int main()
{                                             // Начало главной функции
    float a, b, c, S;                         // Объявление перемнных a, b, c, S
    printf("vvedite kateti\n");
    scanf_s("%f %f", &a, &b);                 // Ввод значений a, b
    c = sqrt(a * a + b * b);                  // Вычисление гипотенузы с
    S = a * b / 2;                            // Вычисление площади S
    printf("hypotenuse = %.2f\n", c);         // Вывод значений с, S
    printf("square =%.2f\n", S);
       return 0;
}

