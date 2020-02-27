#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int i;
	double x = 0;
	for(i =0; i <11;i++)
	{
		x = x+2;
		x/=20;	
		printf("%.3f\n", x);
	}
	printf("\n%.3f\n",x);

}
