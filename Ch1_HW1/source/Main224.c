#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("請輸入一個整數:");
	scanf("%d", &a);

	b = a % 2;

	if (b == 0)
	{
		printf("\n%d為偶數", a);
	}
	else
	{
		printf("\n%d為奇數", a);
	}

	return 0;	
}