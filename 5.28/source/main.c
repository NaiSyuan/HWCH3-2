#include <stdio.h>
#include <stdlib.h>

char althabet(char i);

int main(void)
{
	char j;
	printf("請輸入英文字母:");
	scanf_s("%c", &j);
	printf("%c", althabet(j));

}

char althabet(char i)
{
	if (i >= 97)  //97=61H(a)
	{
		i = i - 32;
	}
	else
	{
		i = i + 32;
	}
	return i;
}