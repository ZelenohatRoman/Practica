# include <stdio.h>
# include <math.h>
float f (float x)
{
	float y;
	if (x <=  3)
	{
		y = pow (x,2) - 3 * x + 9;
	}
	else
	{
		y = 1 / ( pow(x,3)+6);
	}
	return y;
}
