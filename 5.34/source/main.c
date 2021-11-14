#include <stdio.h>
#include <stdlib.h>

unsigned long int Power( base, exponent);

int main(void)
{
	int i,j,a;
	printf("請輸入底數和指數(底數,指數):");
	scanf_s("%d%d", &i, &j);
	a = Power(i,j);
	printf("結果為:%d", a);
	
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
