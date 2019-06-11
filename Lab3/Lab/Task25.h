#include <stdio.h>
#include <math.h>
int findFirstNegativeElement(double eps)
{
    double a = 0;
    int i = 0;

    while (1)
    {
        a = pow(-1,i)*((double)(pow(i,2)+1)/(double)(pow(i,3)+3));

        if ((a < 0) && (fabs(a) <= eps))
        {
            return i+1;
        }

        ++i;
    }
}
