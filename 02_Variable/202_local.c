#include <stdio.h>
/*
	��������

	���ȿ��� ����� ������ �������� ���ȿ����� ��밡����
	���� ������ �ش� ������ ����Ҽ� ����
	scope�� �ش纯��(�̸�)�� ����� �� �ִ� ����

	��������
	�Լ� �ۿ��� ����� ����
	����� ���� ����������� ��밡��
	global scope�� ���´�.
*/

int YEAR = 2021;	// �������� YEAR 


int main() {
	
	printf("YEAR = %d\n", YEAR);

	
	int grade = 4;

	{
		
		int a = 100; // ���� ����� ���ÿ� �ʱ�ȭ
		// ����� �������� ��밡��
		printf("a = %d\n", a);
		printf("grade = %d\n", grade);
		YEAR = 1998;
	}
	//printf("a = %d\n", a);	 
	printf("YEAR = %d\n", YEAR);
	printf("grade = %d\n", grade);

	int age = 32;
	{
		int age = 60;
		printf("age = %d\n", age);
	}
	printf("age = %d\n", age);


	getchar();
	return 0;
}
