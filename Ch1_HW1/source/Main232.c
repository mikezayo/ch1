#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, w, bmi, H;
	printf("�п�J�A������(����):");
	scanf("%f",&h);

	H = h * 0.01;

	printf("�п�J�A���魫(����):");
	scanf("%f",&w);

	bmi = w/ (H*H);

	printf("\n�z��BMI��%f\n", bmi);

	if (bmi < 18.5)
		printf("\n���骬�p:�L��");
	
    else if (18.4 < bmi && bmi < 25)
		printf("\n���骬�p:���`");
	
	else if (24.9 < bmi && bmi < 30)
		printf("\n���骬�p:�L��");

	else if(bmi > 29.9)
		printf("\n���骬�p:�έD");

	return 0;
}