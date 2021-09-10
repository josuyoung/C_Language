#include <stdio.h>

/*
C����� ������ Ÿ��
char : 1byte �����ϳ� (����) -127~127 0 ~ 255
short : 2byte	-30000 ~ 30000 0 ~ 65000
int : 4byte		-20�� ~ 20�� 0 ~ 40��5õ 
long : 4byte (�ý��۸��� ����)
float : 4byte
double : 8byte
*/
int main() {

	printf("������ Ÿ��\n");
	// ����Ÿ�� ����
	int i = 0;
	int a = 100, b = 200, c = 300;

	short s1, s2, s3, s4 = 400;
	long l1, l2 = 10000000, l3;

	char ch1; // 1byte ( 8bit) 256�� ǥ���� ������ �뷮

	ch1 = 'a';	// 'a' ������ �ڵ尪(����)�� ch1�� ����
				// char �����ϳ� --> �̱����ټ�'' ���

	printf("ch1 �� ���� %d\n", ch1);		//'a'�� �ڵ尪�� 97
	printf("ch1 : %c\n", ch1);	//%c�� ���ڷ� ���(����������)
	printf("ch1 �� ���� %d\n", ch1 + 1);
	printf("ch1 : %c\n", ch1+1);

	ch1 = 'A';
	printf("ch1 �� ���� %d\n", ch1);	// 'A' �� �ڵ尪�� 65
	printf("ch1 : %c\n", ch1);

	/*
	%d : 10 ���� ������ ���
	%c : ���� �ϳ��� ���
	%f : �Ǽ� ���
	%x : 16���� ���
	%% : %���
	
	*/
	printf("%d %x %c\n", 65, 65, 65);
	
	{
		/*
			1byte 0 ~ 256
			char : -128 ~ 127
			short : -32748 ~ 34747 ���� �ϳ� ���ڸ� ������ 0�� �����ؼ�
			int	  : -20�� ~ 20��
		*/
		char ch2 = 200;
		printf("ch2 : %d\n", ch2);
	}

	{
		// signed(��ȣ�ִ�) unsigned (��ȣ ����)
		signed char ch1 = 200;	// char ch1 ������, signed�� ����Ʈ��
		unsigned char ch2 = 200;	// 0 ~ 255
		printf("ch1 = %d\n", ch1);
		printf("ch2 = %d\n", ch2);
	}
	{
		//�Ǽ�Ÿ��
		float f1 = 3.141592; // 4byte
		double d1 = 3.141592; // 8byte

		printf("f1 = %f\n", f1);
		printf("d1 = %f\n", d1);

		printf("f1 = %.2f\n", f1);	// %.2f �Ҽ��� 2�ڸ����� �����( ���� �ݿø�)
		printf("d1 = %.4f\n", d1);	

	}

	{
		//�Ǽ� Ÿ�Կ����� �뷮�� ���̴� ������ �ٸ���
		//������ ������ ���ڰ� Ŀ������ �Ǽ��� ���е��� Ŀ����
		// float : �Ҽ��� 6 ~ 9 �ڸ����� ����
		// doyble : �Ҽ��� 15 ~ 19�ڸ����� ��Ȯ
		float f2 = 0.0123456789;
		double d2 = 0.0123456789;
		// %f ������ϸ� �⺻������ �Ҽ��� 6�ڸ����� ���

		printf("f2 = %f, d2 = %f\n", f2, d2);
		printf("f2 = %.10f, d2 = %.10f", f2, d2);

	}


	getchar();
	return 0;
}