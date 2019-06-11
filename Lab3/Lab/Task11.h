#include <stdio.h>
#include <math.h>
double summ(int n)
{
    double a = 0;
    double s = 0;
int i;
	for (i = 0; i < n - 1; ++i)
	{
	    a = pow(-1,i)*((double)(pow(i,2)+1)/(double)(pow(i,3)+3));
	    s += a;
	}

	return s;
}
