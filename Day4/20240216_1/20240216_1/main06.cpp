#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//입력
	//input
	
	// scanf라고하는 가장 간단한 변수 입력 함수
	//int input1 = 0;
	//
	////scanf_s("%d",&변수명)
	//
	//scanf_s("%d", &input1);
	//printf("당신이 입력한 함수 : %d", input1);

	// 실습
	 
	// 숫자 2개를 입력받아서 두개 사이의 숫자를 출력하도록

	srand(time(NULL));
	int input1, input2 = 0;
	int randNum = 0;

	printf(" \n숫자 1을 입력해주세요 :");
	scanf_s("%d", &input1);
	printf(" \n숫자 2를 입력해주세요 :");
	scanf_s("%d", &input2);

	int temp = input2 - input1 + 1;
	randNum = input1 + rand() % temp;

	printf(" %d ~ %d 사이의 숫자 중 랜덤 숫자 출력 : %d", input1, input2, randNum);



}