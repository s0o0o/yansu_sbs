#include <iostream>

	// input : 키보드 입력, 마우스 입력 등 (키보드 입력 위주)
	// output : 출력 (모니터 출력, 기타 Device 출력 (콘솔이므로 콘솔창 출력 위주)

#include <time.h>

using namespace std;

	//모든 프로그래밍 언어가 main 문 이라는 함수를 찾아서 실행
void main()
{
	//	IF문

	// IF문 : 영어에서의 IF, 
	// 만약에
	
	// if ( 조건 )   ==> 조건이 맞을 때만 실행시킬 수 있는 문법
	// { 실행문 }
	 
	// A > B  : A 가 B 보다 크다
	// A < B  : A 가 B 보다 작다
	// A >= B : A 가 B 보다 크거나 같다
	// A <= B : A 가 B 보다 작거나 같다
	// A != B : A 가 B 와 같지 않다
	// A == B : A 가 B 와 같다.
	 
	// = 하나는 대입
	// A && B : A 그리고 B ( and )
	// A || B : A 이거나 B ( or )

	// **** 0 은 false 를 의미. ****
	// **** 1 은 true 를 의미. ****

	int input1 = 0;
	printf(" \n점수를 입력해주세요 : ");
	scanf_s("%d", &input1);

	//90~
	if (input1 > 90)
	{
		printf(" 수 입니다. \n");
	}
	//80~90
	if ((80 < input1) && (input1 <= 90))
	{
		printf(" 우 입니다. \n");
	}
	//70~80
	if ((70 < input1) && (input1 <= 80))
	{
		printf(" 미 입니다. \n");
	}
	//60~70
	if ((60 < input1) && (input1 <= 70))
	{
		printf(" 양 입니다. \n");
	}
	//~60
	if (60 >= input1)
	{
		printf(" 가 입니다. \n");
	}


	// if문
	
  	// else if문
	// => 그렇지 않고 ~~하면

	// else 문
	// => 그렇지 않으면

	if (input1 == 100)
	{
		printf(" 만점입니다. \n");
	}
	else if (input1 == 0) //if 문의 조건이 거짓이고 + 새로운 조건이 참일때
	{
		printf(" 0점 입니다. \n");
	}
	else // 위의 모든 if 가 거짓일 때
	{
		printf("만점이 아닙니다.\n");
	}
}