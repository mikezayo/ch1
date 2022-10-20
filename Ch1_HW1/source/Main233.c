#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, total;
	printf("請輸入您一整天開車的總里程數:");
	scanf("%f", &a);

	printf("汽油一公升/加侖多少錢:");
	scanf("%f", &b);

	printf("平均一公升/加侖能行駛多少公里:");
	scanf("%f", &c);

	printf("請輸入一天的停車費:");
	scanf("%f", &d);

	printf("請輸入一天的通行費(過路費):");
	scanf("%f", &e);

	total = a * (b / c) + d + e;

	printf("您一天的通勤花費為%f", total);

	return 0;
}
