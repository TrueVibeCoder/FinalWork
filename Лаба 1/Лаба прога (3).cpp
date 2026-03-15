// Лабораторная работа №1
// Выполнил: Флеонов М.В.

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    double x; // входное значение для расчёта функции
    double a; //
    double s2; // промежуточный этап вычислений
    double s3; // промежуточный этап вычислений
    double y; // финальный результат вычислений

    printf("Введите значение x: ");
    scanf("%lf", &x);
    
    a=x;

    s2 = fabs(x) + 2 * tan(x);

    s3 = 5.78 * exp(x - 1);

    y = s2 / s3;

    // Вывод значений
    printf("\n--- Исходные данные ---\n");
    printf("s1 = %lf\n", a);
    printf("s2 = |x| + 2*tan(x) = %lf\n", s2);
    printf("s3 = 5.78 * exp(x - 1) = %lf\n", s3);

    printf("\n--- Результат ---\n");
    printf("y = s2 / s3 = %.6lf\n", y);

	getch ();
    return 0;	
}