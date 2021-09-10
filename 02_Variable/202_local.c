#include <stdio.h>
/*
	지연변수

	블럭안에서 선언된 변수는 선언이후 블럭안에서만 사용가능함
	블럭이 끝나면 해당 변수는 사용할수 없음
	scope는 해당변수(이름)를 사용할 수 있는 범위

	전역변수
	함수 밖에서 선언됨 변수
	선언된 이후 어느곳에서나 사용가능
	global scope를 갖는다.
*/

int YEAR = 2021;	// 전역변수 YEAR 


int main() {
	
	printf("YEAR = %d\n", YEAR);

	
	int grade = 4;

	{
		
		int a = 100; // 변수 선언과 동시에 초기화
		// 선언된 블럭에서만 사용가능
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
