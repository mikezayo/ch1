#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("輸入第一個整數A:");
	scanf("%d", &a);
	printf("輸入第二個整數B:");
	scanf("%d", &b);

	if (a%b == 0)
	{
		printf("\n%d是%d的倍數", a, b);
	}
	else
	{
		printf("\n%d不是%d的倍數", a, b);
	}
	
	return 0;
}