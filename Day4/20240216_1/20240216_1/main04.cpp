#include <iostream>

using namespace std;

void main()
{
	// 사칙연산
	
	// 곱하기 빼기 더하기 나누기 + 나머지구하는법
	
	int num1 = 10;
	int num2 = 4;

	int resultSum = num1 + num2;
	int resultSubstract = num1 - num2;
	int resultMultiply = num1 * num2;
	int resultDevide = num1 / num2;
	int resultRemain = num1 % num2; //나머지값

	printf("  === 사칙연산 ===\n\n");
	printf("  num1 : %d\n", num1);
	printf("  num2 : %d\n\n   =============\n", num2);
	printf("  num1 + num2 = %d\n", resultSum);
	printf("  num1 - num2 = %d\n", resultSubstract);
	printf("  num1 * num2 = %d\n", resultMultiply);
	printf("  num1 / num2 = %d\n", resultDevide);
	printf("  num1 %% num2 = %d\n", resultRemain);


	// 변수명 규칙 ( 암기하셈ㅋ )

	// 영어로시작
	// 한글은 쓰지 않음
	// 소문자로 시작
	// 단어 두개를 조합할 일이 생기면 대문자로 단어를 구분 (ex : appleBanana)
	// 
	//
}