#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	// scanf() ���ÿ� ���������� �Է°���
	int a, b, c;
	printf("������ 3�� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("%d + %d + %d = %d\n", a, b, c, a + b + c);

	printf("������ 3���Է��ϼ���");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d + %d + %d = %d\n", a, b, c, a + b + c);




	getchar();
	getchar();
	return 0;
}