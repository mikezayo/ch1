#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("��J�Ĥ@�Ӿ��A:");
	scanf("%d", &a);
	printf("��J�ĤG�Ӿ��B:");
	scanf("%d", &b);

	if (a%b == 0)
	{
		printf("\n%d�O%d������", a, b);
	}
	else
	{
		printf("\n%d���O%d������", a, b);
	}
	
	return 0;
}