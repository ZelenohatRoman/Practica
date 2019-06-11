#include <stdio.h>
#include <math.h>

void main()
{	//Вычисление выражения для x = 5
	double x = 5, y;
	y = sqrt(2) / 2 * sin(x / 2);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для x = 3.0051
	x = 3.0051;
	y = sqrt(2) / 2 * sin(x / 2);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	//Вычисление выражения для произвольного x, которое введет пользователь
	printf("Vvedite x: ");
	scanf("%lf", &x);
	y = sqrt(2) / 2 * sin(x / 2);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", y);
	system("pause");
	return;
}