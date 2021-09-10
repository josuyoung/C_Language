#include <stdio.h>	//표준 입출력헤더
#pragma warning(disable:4996)	// scanf 사용관련 에러 무시

//입력 - 키보드(standard input),마우스,네트워크,파일
//출력 - 모니터(standard ouput), 프린터, 네트우커, 파일

int main() {
	
	printf("scanf() 입력\n");
	int kor,eng,math;
	printf("국어접수를 입력하세요:");
	scanf("%d", &kor);
	printf("영어접수를 입력하세요:");
	scanf("%d", &eng);
	printf("수학접수를 입력하세요:");
		//키보드로부터 정수 한개 입력 -> kor 변수에 대입
		// 대입받을 변수명 앞에 &붙여주기
	scanf("%d", &math);

	printf("입력하신 점수는 %d,%d,%d 입니다\n", kor,eng,math);

	//총점과 평균 구하기
	int total = kor + eng + math;
	printf("총점은 : %d\n", total);

	//float avg = total / 3;	//정수와 정수의 나눗셈 연산 연산결과는 '정수'타입!

	//float avg = total / 3.0;	//실수와의 연산결과는 '실수'타입 (**더 높은 메모리를 가지는 것과 연산하면 그 메모리로 계산)

	float avg = (float)total / 3;	//형변환 연산자를 사용하여 float타입으로 변환
	printf("평균은 :%.1f", avg);

	getchar();
	getchar();
	return 0;
}