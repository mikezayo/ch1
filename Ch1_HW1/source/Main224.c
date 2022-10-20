#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	printf("叫块俱计:");
	scanf("%d", &a);

	b = a % 2;

	if (b == 0)
	{
		printf("\n%d案计", a);
	}
	else
	{
		printf("\n%d计", a);
	}

	return 0;	
}