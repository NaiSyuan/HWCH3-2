#include <stdio.h>
#include <stdlib.h>

unsigned int LCM(x,y);

int main(void)
{
	unsigned int i, j,k,temp;
	printf("請輸入兩個整數:");
	scanf_s("%d%d", &i, &j);
	if (i < j)
	{
		temp = i;
		i = j;
		j = temp;
	}
	for (k = i; k > 0; k++)
	{
		if (k % i == 0 && k % j == 0)
		{
			printf("最小公倍數是:%d", k);
			break;
		}
	}
}

