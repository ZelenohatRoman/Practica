#include <stdio.h>
#include <math.h>
double summ(int n)
{
    double a = 0;
    double s = 0;
    int i = 0;

	while (i < n - 1)
	{
	    a = pow(-1,i)*((double)(pow(i,2)+1)/(double)(pow(i,3)+3));
	    s += a;
	    ++i;
	}

	return s;
}
