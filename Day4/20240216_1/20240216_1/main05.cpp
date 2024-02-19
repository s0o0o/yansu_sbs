#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));
	//실습
	//0 ~ 30 사이의 랜덤 숫자를 출력하기

	// 1.
	int randNum = rand() % 31;
	printf(" 0 ~ 30 사이 랜덤 숫자 출력 : %d\n\n", randNum);

	// 2. 0 ~ 100 랜덤 숫자 넣기
	int random1 = rand() % 101;
	printf(" random1 : %d\n\n", random1);

	// 3. 
	// 25 ~ 40 사이의 랜덤 숫자 출력하기

	int randNum2 = rand() % 16 + 25;
	printf(" 25 ~ 40 사이의 랜덤 숫자 출력 : %d\n\n", randNum2);

	// 4.
	// 150 ~ 270 사이의 랜덤 숫자 출력하기
	int randNum3 = rand() % 121 + 150;
	printf(" 150 ~ 270 사이의 랜덤 숫자 출력 : %d\n\n", randNum3);


}