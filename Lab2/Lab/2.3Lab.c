# include <stdio.h>
# include <math.h>
# include "Lab_21.h"
# include "Lab_22.h"
float f ( float x);
int Pr1 ( float x, float y);
int main()
{
	float x , y;
	int res;
	int r;
	scanf("%d", & r);
	switch (r)
	{
		case 1:
	scanf("%f", & x);
	scanf("%f", & y);
	res = Pr1 (x , y);
	printf ("%d", res);
		break;
		case 2:
	scanf("%f", &x);
	y = f(x);
	printf("%f",y);
		break;
		default :
		printf ("Error");
	}
	return 0;
}
