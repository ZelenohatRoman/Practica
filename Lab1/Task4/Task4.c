﻿#include <stdio.h>
#include <math.h>

//Глобальные переменные
double x, y;

void f(void) {
	y = sqrt(2) / 2 * sin(x / 2);
	return;
}

void main()
{	//Вычисление выражения для x = 5
	x = 5;
	f();
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для x = 3.0051
	x = 3.0051;
	f();
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для произвольного x, которое введет пользователь
	printf("Vvedite x: ");
	scanf_s("%lf", &x);
	f();
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	system("pause");
	return;
}
