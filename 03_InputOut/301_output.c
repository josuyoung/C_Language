#include <stdio.h>

int main() {

	printf("�⺻���(output)\n");
	// printf : print formatted (����ȭ�� ���)

	//"���ڿ�"���
	printf("Hello World\n");

	// ���ڿ�(string) ����
	// �ִ� 20���� ���ڸ� ������ �ִ� ���ڿ�str1 ����
	char str1[20] = "C Langauge";	// 10������, ���鵵 �ϳ��� ����!

	// %s : ���ڿ� ��� ����������
	printf("str1 = %s\n",str1);

	char str2[] = "Java Langauge"; //�ڵ����� �ʿ��Ѹ�ŭ�� ���ڿ������� ����(�ڵ� �ʱ�ȭ)
	printf("str2 : %s\n" ,str2);

	char* str3 = "Python Language";
	printf("str3 : %s\n", str3);
	// ==================================
	// %d ����������
	int a = 10, b = 123, c = 4567;
	printf("|%d|%d|%d|\n", a, b, c);
	printf("|%5d|%5d|%5d|\n", a, b, c);	//%xd x�� ���� ���� ��� ( �⺻ ��������)
	printf("|%-5d|%-5d|%-5d|\n", a, b, c);	//-x �� ��������

	//excape ����
	/* 
		\n : �ٹٲ�
		\t : ��
		\" : "
		\\ : \
		\0 : null(��)���� ���
	*/
	printf("%d%d%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 1000, 2000, 3000);
	printf("%d\t%d\t%d\n", 10000, 20000, 30000);

	// say "hi"
	printf("say \"hi\"\n ");
	printf("\\\\�� \\�� ����ϱ����� ESCAPE���� �Դϴ�.");

	getchar();
	return 0;
}