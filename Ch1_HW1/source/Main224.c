#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("�п�J�@�Ӿ��:");
	scanf("%d", &a);

	b = a % 2;

	if (b == 0)
	{
		printf("\n%d������", a);
	}
	else
	{
		printf("\n%d���_��", a);
	}

	return 0;	
}