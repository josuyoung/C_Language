
#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	float height, weight;
	printf("Ű�� �Է��ϼ���: ");
	scanf("%f", &height);
	printf("�����Ը� �Է��ϼ���: ");
	scanf("%f", &weight);
	printf("Ű�� : %.1f(cm) �����Դ� : %.1f(kg) �Դϴ�\n", height, weight);

	double d1;
	printf("�Ǽ��� �Է��ϼ��� :");
	scanf("%lf", &d1);
	printf(" %.12f", d1);


	getchar();
	getchar();
	return 0;
}