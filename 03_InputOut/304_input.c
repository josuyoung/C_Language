#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	// scanf() 동시에 여러데이터 입력가능
	int a, b, c;
	printf("정수를 3개 입력하세요 : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d + %d + %d = %d\n", a, b, c, a + b + c);

	printf("정수를 3개입력하세요");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d + %d + %d = %d\n", a, b, c, a + b + c);




	getchar();
	getchar();
	return 0;
}