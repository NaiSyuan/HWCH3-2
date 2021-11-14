#include <stdio.h>
#include <stdlib.h>

unsigned long int Power( base, exponent);

int main(void)
{
	int i,j,a;
	printf("叫块┏计㎝计(┏计,计):");
	scanf_s("%d%d", &i, &j);
	a = Power(i,j);
	printf("挡狦:%d", a);
	
}

unsigned long int Power(base, exponent)
{
	if (exponent >= 1)
	{
		return(base * Power(base,exponent-1));
	}
	else
	{
		return 1;
	}
}
