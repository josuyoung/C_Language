#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	char name[20];	// �ִ� 20���ڸ� ������ �ִ� ���ڿ� name

	printf("�̸��� �Է��ϼ���:");
	scanf("%s", name);	// ���ڿ� �Է¹��� �ÿ��� & ��� x

	printf("�Է��Ͻ� �̸��� : %s\n", name);
	printf("=======================\n");

	int age;
	printf("���̸� �Է��ϼ��� :");
	scanf("%d", &age);

	
	char nick[20];
	printf("������ �Է��ϼ���:");
	scanf("%s", nick);

	printf("���� :%d , ���� : %s\n", age, nick);

	getchar();


	//���� �Է�;
	// gets();
	printf("full-name �� �Է��ϼ���:");
	gets(name);		// ���� ������ ���� �Է�
	printf("�̸��� %s�Դϴ�\n", name);




	getchar();
	getchar();
	return 0;
}