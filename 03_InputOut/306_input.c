#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	char ch;
	int a, b;

	printf("문자하나 입력:");
	scanf("%c", &ch);	//scanf의 %c는 버퍼에서 한문자만 가져감 
						//그런데 입력할 때는 버퍼에 문자하나랑 \n이 같이 들어가있음
						//scanf %d는 공백이든 줄바꿈을 다 제거함 숫자가 끝날 때 까지;
						//그러므로 숫자입력후 다시 scanf %c를 하려면 \n을 가져옴
						//** 공식처럼 숫자입력 뒤에는 공백을 제거하는 getchar();등 잊지말자
	printf("입력한 문자는 : %c\n", ch);

	printf("정수하나 입력:");
	scanf("%d", &a);

	printf("다른 문자한 입력:");
	getchar();	//buffer에 남아있는 줄바꿈 문자 하나 제거.
	scanf("%c", &ch);	//%c 는 무조건 버퍼의 문자 하나를 출력한다 엔터든 공백이든
						// 그러므로 buffer에 공백이 있으면 미리 제거해야함.
	
	// 숫자 입력후 %c 입력하려면 버퍼 앞의 공백을 꼭 제거하자!
	// 앞에 무언가 입력하면 enter를 누르게 된다 그러면 버퍼에 마지막에 \n이 들어가니까 
	// 다음 scanf("%c",&ch); 식으로 쓰게되면 \n만 가져오게된다 주의!

	printf("a = %d, ch = %c\n", a, ch);



	getchar();
	printf("\n엔터를 누르면 프로그램이 종료됩니다\n");
	getchar();
	return 0;
}