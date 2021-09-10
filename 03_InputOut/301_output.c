#include <stdio.h>

int main() {

	printf("기본출력(output)\n");
	// printf : print formatted (서식화된 출력)

	//"문자열"출력
	printf("Hello World\n");

	// 문자열(string) 선언
	// 최대 20개의 문자를 담을수 있는 문자열str1 선언
	char str1[20] = "C Langauge";	// 10ㅁ누자, 공백도 하나의 문자!

	// %s : 문자열 출력 서식지정자
	printf("str1 = %s\n",str1);

	char str2[] = "Java Langauge"; //자동으로 필요한만큼의 문자열갯수로 생성(자동 초기화)
	printf("str2 : %s\n" ,str2);

	char* str3 = "Python Language";
	printf("str3 : %s\n", str3);
	// ==================================
	// %d 서식지정자
	int a = 10, b = 123, c = 4567;
	printf("|%d|%d|%d|\n", a, b, c);
	printf("|%5d|%5d|%5d|\n", a, b, c);	//%xd x에 값에 맞춰 출력 ( 기본 우측정렬)
	printf("|%-5d|%-5d|%-5d|\n", a, b, c);	//-x 는 좌측정렬

	//excape 문자
	/* 
		\n : 줄바꿈
		\t : 탭
		\" : "
		\\ : \
		\0 : null(널)문자 출력
	*/
	printf("%d%d%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 10, 20, 30);
	printf("%d\t%d\t%d\n", 1000, 2000, 3000);
	printf("%d\t%d\t%d\n", 10000, 20000, 30000);

	// say "hi"
	printf("say \"hi\"\n ");
	printf("\\\\는 \\를 출력하기위한 ESCAPE문자 입니다.");

	getchar();
	return 0;
}