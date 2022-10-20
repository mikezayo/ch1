#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int s[3];
	printf("叫块俱计:");
	for (int a = 0; a < 3; a++)
	{
		scanf("%d", &s[a]);
	}
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (s[i] > s[j] && i != j)
			{
				int a = s[i];
				s[i] = s[j];
				s[j] = a;
			}
		}
	}

	printf("\n程俱计琌 %d", s[2]);
	printf("\n程俱计琌 %d", s[0]);

	return 0;
	
}