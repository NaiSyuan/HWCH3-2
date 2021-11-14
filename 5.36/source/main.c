#include <stdio.h>
#include <stdlib.h>

int moved = 0;

int hanoi(n,a,b,c);

int main() {
	int n;
	printf("�п�J�h��:");
	scanf_s("%d", &n);
	hanoi(n, 1, 2, 3);
	printf("\n�`�@���ʤF%d�B\n\n", moved);
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
