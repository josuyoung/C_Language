#include <stdio.h>

/*
변수
프로그램에서 데이터를 담기 위한 공간
이 공간에 이름을 붙여서 관리. 이 이름을 변수명이라고함

변수는 ㄴ사용하기전에 반드시 선언해야함 (declarlation)
변수 선언구문
[변수타입] [변수명];
변수는 사용하기전에 반드시 초기화를 해야함
*/

int main() {
	printf("변수(variable)\n");

	int a; // int 타입의 변수 a선언 , int 타입 : 정수 타입 (integer)
	int b;
	int c;
	int mike, jane; // 한번에 여러개 변수 선언도 가능

	//printf("서식 문자열");
	printf("제 나이는 23살입니다\n");
	printf("제 나이는 %d살입니다\n", 34);
	printf("제 나이는 %d살입니다\n", 10 + 9);
	printf("%d 년은 제가 %d살이 된느 해입니다\n", 2021, 23);

	a = 100;	// a 변수에 100값을 대입(assign)
				// 변수의 초기화 : 사용하기전 최초의 값을 대입하는 행위

	print f("제 나이는 %d살입니다 \n", a);
	printf("a x a = %d\n", a * a);
	a = 200; //a 변수에 200값을 대입( 덮어쓰기)
	printf("%d + %d = %d\n", a, a, a + a);
	printf("x = %d\n", x);	// 선언되지않은 변수는 사용불가
	int x; // 그래도 에러다, 변수는 선언한 '이후'부터 사용 가능하다.
			// ctrl + k +c = 주석달기
			//ctrl + k + u = 주석삭제 
	//printf("mike : %d, jane = %d", mike,jane):1	 초기화되지않은 변수 사용불가

	int hello_my_world2021;
	//int a;	// 동일한 이름의 지역변수 중복으로 선언햇오
	/*int aaaa, AAAA, Aaaa, AAaa, aaaA; 
	int _total_; 
	int my world;*/


	getchar();
	return 0;
}