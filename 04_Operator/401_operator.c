#include <stdio.h> // ǥ�� ����� ���
#pragma warning(disable:4996) // scanf() �� ANSI C�Լ� ���� ����
/*

*/

int main() {
	// TODO
	printf("��� ������ : + - * / %");	// �����ڴ� ��ȣ �ǿ����ڴ� ��� ����
	int result = 10 % 3;
	printf("result = %d\n", result);

	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);

	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);


	int n = 10;
	n = n + 3; // ���� ������ +3
	n += 3;	// ���� ������ �������ϴ� ���մ��� ������
	printf("n = %d\n", n);

	n %= 5;	// n = n % 5;
	printf("n = %d\n", n);
	printf("n = %d\n", n);

	n -= 31;
	printf("n = %d\n", n);

	//���� ������
	// ++, --
	n = 10;
	n = n + 1;
	n += 1;
	n++;
	printf("n = %d\n", n);

	--n;	//postfix ���
	n--;	//prefix ���

	// postfix ��� : �������� '����' �� �������� ����
	// prefix ���  : �������� '����' �� �������� ����

	int num1 = 5;
	int num2 = num1++ + 4;

	// num1 ? num2 ?
	printf("num1 = %d, num2 = %d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	//�������̸� ���������ڴ� ����� '��;���� ����ϴ� ���� ������
	num1 = 5;
	num2 = num1 + 4;
	num1++;

	//'���Կ�����'�� ���� ������� �մ�.
	printf("num1 = %d\n", num1 = 5);

	int num3 = num2 = num1;
	printf("num3 = %d\n", num3);

	//�񱳿�����(���迬����)
	// ����� '��'�̸� 1, '����'�̸� 0
	// > , < , >= , <= , == , != , ..
	printf("\n�񱳿�����\n");
	printf("10 > 3 = %d\n", 10 > 3);
	printf("10 < 3 = %d\n", 10 < 3);
	printf("10 >= 3 = %d\n", 10 >= 3);
	printf("10 == 3 = %d\n", 10 == 3);
	printf("10 != 3 = %d\n", 10 != 3);

	//�� ������
	// &&, ||, !
	// && : and ������ , ���� ������, �ǿ����� ������ �Ѵ� ���ΰ�츸 ��
	// || : or ������ , ���� ������, �ǿ����� ������ �ϳ��� ���̿��� ��
	// ! : not������ , �� -> ����

	printf("\n��������\n");
	result = (10 < 4) || (45 < 90);
	printf("result = %d\n", result);

	result = 10 - 10 || 100 + 1;
	printf("result = %d\n", result);

	result = 10 - (10 || 100) + 1;
	printf("result :: %d\n", result);

	result = 54 % 2 == 0;
	printf("result :: %d\n", result);
	result = !(54 % 2 == 0);
	printf("result :: %d\n", result);
	// C���� 0 �� ����, 0 �̿��� ���� ������ �� JAVA�� PYTHON���� BooleanŸ�Ծ���

	printf("%d , %d, %d\n", 200 * 2, -1, 0);
	printf("%d, %d, %d", !(200 * 2), !(-1), !(0));

	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
}