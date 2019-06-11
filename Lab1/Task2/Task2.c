#include <stdio.h>
#include <math.h>

//Объявление функции f
double f(double x) {
	double res;
	res = sqrt(2) / 2 * sin(x / 2);
	return res;
}

void main()
{	//Вычисление выражения для x = 5
	double x = 5, y;
	y = f(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для x = 3.0051
	x = 3.0051;
	y = f(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для произвольного x, которое введет пользователь
	printf("Vvedite x: ");
	scanf_s("%lf", &x);
	y = f(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	system("pause");
	return;
}
