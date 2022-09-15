#include <stdio.h>
int main()
{                                            // Начало главной функции
    int number, a, b, c, d, e, f;            // Объявление переменных number, a, b, c, d, e, f
    printf("vvedite number\n");
    scanf_s("%d", &number);                  // Ввод числа 
    a = number / 100000 % 10;                // Определение первой цифры
    b = number / 10000 % 10;                 // Опредеоение второй цифры
    c = number / 1000 % 10;                  // Определение третьей цифры
    d = number / 100 % 10;                   // Определение четвёртой цифры 
    e = number / 10 % 10;                    // Определение пятой цифры 
    f = number % 10;                         // Определение шестой цифры 
    if (a + b + c == d + e + f)              // Проверка условия 
        printf("the lucky one");
    else
        printf("the unlucke one");
    return 0;
}
