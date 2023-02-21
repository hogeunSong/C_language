#include <stdio.h>
#include<string.h>

int main(void)
{
	int a;								// int형 변수 a 선언
	int b, c;							// 2개의 int형 변수 b, c를 동시에 선언
	double da;							// double형 변수 da 선언
	char ch;							//char형 변수 ch 선언

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);


//------------------------------------------------------------------------------------------------------------------------------------------------------------
		// 정수자료형!
// 3-2번 char형 변수의 사용

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch1);				// 문자로 초기화, 저장된 값은 문자의 아스키 코드 값
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);			// 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

	
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147482647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);


	printf("long long형의 크기 : %d바이트\n", sizeof(long long));		// 자료형의 크기를 바이트 단위로 계산해줌.(컴파일러에서 구현된 자료형의 크기를 알 수 있음)


//------------------------------------------------------------------------------------------------------------------------------------------------------------------
//unsigned를 잘못 사용한 경우

	unsigned int k;

	k = 4294967295;
	printf("%d\n", k);
	k = -1;
	printf("%u\n", k);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
			// 실수 자료형

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20ㅣf\n", db);

	/* 2개 모두 초깃값과 출력값이 다르다(컴퓨터에서 실수를 표현하는 방식이 오차를 가지고 있기 때문이다 */
	/* 그렇기에 float형은 유효 숫자 7자리, double형은 15자리의 범위 내의 값을 사용하는 것이 좋다 */


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
		// 문자열 저장
/* char 배열명[문자열길이+1] =문자열; */

	char frut[6] = "akpple";

	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");

//char 배열에 문자열 복사

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);


//const를 붙이면 초기화된 값을 바꿀 수 없다!

	int income = 0;                                   //소득액 초기화
	double tax;										  //세금
	const double tax_rate = 0.12;					  //세율 초기화


	income = 456;									  //소득액 저장
	tax = income * tax_rate;						  //세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);



	return 0;

}