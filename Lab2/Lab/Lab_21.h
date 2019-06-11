# include <stdio.h>
int Pr1 (float x , float y)
	{
		int v;
		if ( x <= 0 && x >= -1 && y <= 1 && y >= -1 && y >= x || x >= 0 && x <= 1 && y <= 1 && y >= 0 && y >= x )	
		{
		  v = v + 1 ;
		}
		return v;
	}
