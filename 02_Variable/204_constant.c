#include <stdio.h>

/*
	상수
		(대문자로 쓰는게 Convention)
		한번 값이 정해지면 변경할수없는데이터
			변수의 반대
				
		방법
			const 키워드 사용
			#define 사용
*/

#define MAX_SIZE 100
int main() {

	printf("상수(contant)\n");

	const int NUMBER = 100; // int 타입 상수 NUMBER 선언 및 초기화
	//NUMBER = 200;			// 상수는 한번 값을 대입하면 변경 불가
	//n = 200;
	printf("NUMBER = %d\n", NUMBER);

	//** rename : CTRL + R , CTRL + R
	printf("MAX_SIZE = %d\n", MAX_SIZE);

	int a;
	a = 100;
	// 100 = a;		// 코드상에 직접 입력하는 숫자, 문자는 모두 ('literal')상수

	getchar();
	return 0;
}