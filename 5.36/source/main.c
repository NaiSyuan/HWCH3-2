#include <stdio.h>
#include <stdlib.h>

int moved = 0;

int hanoi(n,a,b,c);

int main() {
	int n;
	printf("請輸入層數:");
	scanf_s("%d", &n);
	hanoi(n, 1, 2, 3);
	printf("\n總共移動了%d步\n\n", moved);
	system("pause");
	return 0;
}

int hanoi(n, a, b, c) 
{
	if (n == 1)
	{
		printf(" %d to %d\n", a, c);
		moved++;
	}
	else
	{
		hanoi(n - 1, a, c, b);
		hanoi(1, a, b, c);
		hanoi(n - 1, b, a, c);
	}
}
