#include <stdio.h>	//ǥ�� ��������
#pragma warning(disable:4996)	// scanf ������ ���� ����

//�Է� - Ű����(standard input),���콺,��Ʈ��ũ,����
//��� - �����(standard ouput), ������, ��Ʈ��Ŀ, ����

int main() {
	
	printf("scanf() �Է�\n");
	int kor,eng,math;
	printf("���������� �Է��ϼ���:");
	scanf("%d", &kor);
	printf("���������� �Է��ϼ���:");
	scanf("%d", &eng);
	printf("���������� �Է��ϼ���:");
		//Ű����κ��� ���� �Ѱ� �Է� -> kor ������ ����
		// ���Թ��� ������ �տ� &�ٿ��ֱ�
	scanf("%d", &math);

	printf("�Է��Ͻ� ������ %d,%d,%d �Դϴ�\n", kor,eng,math);

	//������ ��� ���ϱ�
	int total = kor + eng + math;
	printf("������ : %d\n", total);

	//float avg = total / 3;	//������ ������ ������ ���� �������� '����'Ÿ��!

	//float avg = total / 3.0;	//�Ǽ����� �������� '�Ǽ�'Ÿ�� (**�� ���� �޸𸮸� ������ �Ͱ� �����ϸ� �� �޸𸮷� ���)

	float avg = (float)total / 3;	//����ȯ �����ڸ� ����Ͽ� floatŸ������ ��ȯ
	printf("����� :%.1f", avg);

	getchar();
	getchar();
	return 0;
}