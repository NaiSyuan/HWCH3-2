#include <stdio.h>
#include <stdlib.h>

unsigned long int Power( base, exponent);

int main(void)
{
	int i,j,a;
	printf("�п�J���ƩM����(����,����):");
	scanf_s("%d%d", &i, &j);
	a = Power(i,j);
	printf("���G��:%d", a);
	
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
