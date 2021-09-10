#include <stdio.h>

/*
C언어의 데이터 타입
char : 1byte 문자하나 (정수) -127~127 0 ~ 255
short : 2byte	-30000 ~ 30000 0 ~ 65000
int : 4byte		-20억 ~ 20억 0 ~ 40억5천 
long : 4byte (시스템마다 상이)
float : 4byte
double : 8byte
*/
int main() {

	printf("데이터 타임\n");
	// 정수타입 변수
	int i = 0;
	int a = 100, b = 200, c = 300;

	short s1, s2, s3, s4 = 400;
	long l1, l2 = 10000000, l3;

	char ch1; // 1byte ( 8bit) 256개 표현이 가능한 용량

	ch1 = 'a';	// 'a' 문자의 코드값(정수)이 ch1에 대입
				// char 문자하나 --> 싱글코텐셜'' 사용

	printf("ch1 의 값은 %d\n", ch1);		//'a'의 코드값은 97
	printf("ch1 : %c\n", ch1);	//%c는 문자로 출력(서식지정자)
	printf("ch1 의 값은 %d\n", ch1 + 1);
	printf("ch1 : %c\n", ch1+1);

	ch1 = 'A';
	printf("ch1 의 값은 %d\n", ch1);	// 'A' 의 코드값은 65
	printf("ch1 : %c\n", ch1);

	/*
	%d : 10 진수 정수로 출력
	%c : 문자 하나로 출력
	%f : 실수 출력
	%x : 16진수 출력
	%% : %출력
	
	*/
	printf("%d %x %c\n", 65, 65, 65);
	
	{
		/*
			1byte 0 ~ 256
			char : -128 ~ 127
			short : -32748 ~ 34747 숫자 하나 모자른 이유는 0을 포함해서
			int	  : -20억 ~ 20억
		*/
		char ch2 = 200;
		printf("ch2 : %d\n", ch2);
	}

	{
		// signed(부호있는) unsigned (부호 없는)
		signed char ch1 = 200;	// char ch1 과동일, signed은 디폴트값
		unsigned char ch2 = 200;	// 0 ~ 255
		printf("ch1 = %d\n", ch1);
		printf("ch2 = %d\n", ch2);
	}
	{
		//실수타입
		float f1 = 3.141592; // 4byte
		double d1 = 3.141592; // 8byte

		printf("f1 = %f\n", f1);
		printf("d1 = %f\n", d1);

		printf("f1 = %.2f\n", f1);	// %.2f 소숫점 2자리까지 ㅣ출력( 이하 반올림)
		printf("d1 = %.4f\n", d1);	

	}

	{
		//실수 타입에서의 용량의 차이는 정수랑 다르다
		//정수는 막연히 숫자가 커지지만 실수는 정밀도가 커진다
		// float : 소숫점 6 ~ 9 자리까지 정밀
		// doyble : 소숫점 15 ~ 19자리까지 정확
		float f2 = 0.0123456789;
		double d2 = 0.0123456789;
		// %f 로출력하면 기본적으로 소숫점 6자리까지 출력

		printf("f2 = %f, d2 = %f\n", f2, d2);
		printf("f2 = %.10f, d2 = %.10f", f2, d2);

	}


	getchar();
	return 0;
}