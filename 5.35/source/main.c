#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(n);
unsigned int fibonaccimax(n);

int main(void)
{
	int a, b, c, result,max;
	printf("�п�J�A�n�p�⪺��n��Fibonacci���:\nn=");
	scanf_s("%d", &a);

	result = fibonacci(a);
	max = fibonacci();
	printf("��n��Fibonacci��ƬO:%\n", result);
	printf("�t�ί�L�X���̤jFibonacci���:%d", max);
}

unsigned int fibonacci(n)
{
	unsigned long long int i, j, m = 1,k = 0;
	
	for (i = 1; i < n; i++)
	{
		j = k + m;
		k = m;
		m = j;
	}
	return k;
}
unsigned int fibonaccimax(n)
{
	unsigned long long int a, b, c = 1,d = 0;
	
	for (a=0;a < 999999999999999999; a++)
	{
		b = d + c;
		d = c;
		c = b;
		if (c < d)
		{
			return d;
		}
		break;
	}
}