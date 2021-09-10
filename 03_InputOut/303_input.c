
#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	float height, weight;
	printf("키를 입력하세요: ");
	scanf("%f", &height);
	printf("몸무게를 입력하세요: ");
	scanf("%f", &weight);
	printf("키는 : %.1f(cm) 몸무게는 : %.1f(kg) 입니다\n", height, weight);

	double d1;
	printf("실수를 입력하세요 :");
	scanf("%lf", &d1);
	printf(" %.12f", d1);


	getchar();
	getchar();
	return 0;
}