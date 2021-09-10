#include <stdio.h> // 표준 입출력 헤더
#pragma warning(disable:4996) // scanf() 등 ANSI C함수 에러 무시
/*

*/

int main() {
	// TODO
	printf("산술 연산자 : + - * / %");	// 연산자는 기호 피연산자는 상수 변수
	int result = 10 % 3;
	printf("result = %d\n", result);

	result = 4 * 2 + 6 / 2;
	printf("result = %d\n", result);

	result = 4 * (2 + 6) / 2;
	printf("result = %d\n", result);


	int n = 10;
	n = n + 3; // 기존 변수에 +3
	n += 3;	// 위와 동일한 동작을하는 복합대입 연산자
	printf("n = %d\n", n);

	n %= 5;	// n = n % 5;
	printf("n = %d\n", n);
	printf("n = %d\n", n);

	n -= 31;
	printf("n = %d\n", n);

	//증감 연산자
	// ++, --
	n = 10;
	n = n + 1;
	n += 1;
	n++;
	printf("n = %d\n", n);

	--n;	//postfix 방식
	n--;	//prefix 방식

	// postfix 방식 : 기존연산 '직후' 에 증감연산 수행
	// prefix 방식  : 기존연산 '직전' 에 증감연산 수행

	int num1 = 5;
	int num2 = num1++ + 4;

	// num1 ? num2 ?
	printf("num1 = %d, num2 = %d\n", num1, num2);

	num1 = 5;
	num2 = ++num1 + 4;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	//가급적이면 증감연산자는 연산식 '안;에서 사용하는 것은 피하자
	num1 = 5;
	num2 = num1 + 4;
	num1++;

	//'대입연산자'도 연산 결과값이 잇다.
	printf("num1 = %d\n", num1 = 5);

	int num3 = num2 = num1;
	printf("num3 = %d\n", num3);

	//비교연산자(관계연산자)
	// 결과가 '참'이면 1, '거짓'이면 0
	// > , < , >= , <= , == , != , ..
	printf("\n비교연산자\n");
	printf("10 > 3 = %d\n", 10 > 3);
	printf("10 < 3 = %d\n", 10 < 3);
	printf("10 >= 3 = %d\n", 10 >= 3);
	printf("10 == 3 = %d\n", 10 == 3);
	printf("10 != 3 = %d\n", 10 != 3);

	//논리 연산자
	// &&, ||, !
	// && : and 연산자 , 논리곱 연산자, 피연산자 양쪽이 둘다 참인경우만 참
	// || : or 연산자 , 논리합 연산자, 피연산자 양쪽중 하나만 참이여도 참
	// ! : not연산자 , 참 -> 거짓

	printf("\n논리연산자\n");
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
	// C언어는 0 은 거짓, 0 이외의 값은 무조건 참 JAVA나 PYTHON같이 Boolean타입없음

	printf("%d , %d, %d\n", 200 * 2, -1, 0);
	printf("%d, %d, %d", !(200 * 2), !(-1), !(0));

	printf("\nENTER 를 누르면 종료됩니다\n");
	getchar();
	return 0;
}