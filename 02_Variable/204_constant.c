#include <stdio.h>

/*
	���
		(�빮�ڷ� ���°� Convention)
		�ѹ� ���� �������� �����Ҽ����µ�����
			������ �ݴ�
				
		���
			const Ű���� ���
			#define ���
*/

#define MAX_SIZE 100
int main() {

	printf("���(contant)\n");

	const int NUMBER = 100; // int Ÿ�� ��� NUMBER ���� �� �ʱ�ȭ
	//NUMBER = 200;			// ����� �ѹ� ���� �����ϸ� ���� �Ұ�
	//n = 200;
	printf("NUMBER = %d\n", NUMBER);

	//** rename : CTRL + R , CTRL + R
	printf("MAX_SIZE = %d\n", MAX_SIZE);

	int a;
	a = 100;
	// 100 = a;		// �ڵ�� ���� �Է��ϴ� ����, ���ڴ� ��� ('literal')���

	getchar();
	return 0;
}