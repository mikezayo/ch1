#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, w, bmi, H;
	printf("請輸入你的身高(公分):");
	scanf("%f",&h);

	H = h * 0.01;

	printf("請輸入你的體重(公斤):");
	scanf("%f",&w);

	bmi = w/ (H*H);

	printf("\n您的BMI為%f\n", bmi);

	if (bmi < 18.5)
		printf("\n身體狀況:過輕");
	
    else if (18.4 < bmi && bmi < 25)
		printf("\n身體狀況:正常");
	
	else if (24.9 < bmi && bmi < 30)
		printf("\n身體狀況:過重");

	else if(bmi > 29.9)
		printf("\n身體狀況:肥胖");

	return 0;
}