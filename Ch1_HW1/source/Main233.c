#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, total;
	printf("�п�J�z�@��Ѷ}�����`���{��:");
	scanf("%f", &a);

	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%f", &b);

	printf("�����@����/�[�گ��p�h�֤���:");
	scanf("%f", &c);

	printf("�п�J�@�Ѫ������O:");
	scanf("%f", &d);

	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf("%f", &e);

	total = a * (b / c) + d + e;

	printf("�z�@�Ѫ��q�Ԫ�O��%f", total);

	return 0;
}
