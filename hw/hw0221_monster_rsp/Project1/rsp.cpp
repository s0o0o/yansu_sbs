#include <iostream>
#include <time.h>
using namespace std;

int _myHand = 0; // 내 손
int _comHand = 0; // 컴퓨터 손 (상대방 손)
int _result = 0;

void PrintGameStart()
{
	printf("┌──────────────────────────────────────────────┐\n");
	printf("│          *** ROCK SCISSOR PAPER ***          │\n");
	printf("└──────────────────────────────────────────────┘\n");
}

void ChooseMyHand()
{
	cout << endl;
	cout << " 가위 ( 0 ) , 바위 ( 1 ) , 보 ( 2 ) " << endl;
	cout << " 당신의 선택을 골라주세요 :";
	cin >> _myHand;
}

void ChooseComHand()
{
	cout << endl;
	cout << " 컴퓨터가 선택 중입니다 ``` " << endl;
	_comHand = rand() % 3;
}

void PrintHands()
{
	printf(" \n\n 선택 결과 ( 가위 ( 0 ) , 바위 ( 1 ) , 보 ( 2 ) \n\n");
	printf(" 나 : %d \n", _myHand);
	printf(" 컴퓨터 : %d \n", _comHand);
}

void PrintGameResult()
{
	_result = _comHand - _myHand;

	if (_result == 0)
	{
		printf(" 비겼습니다. \n");
	}
	if ((_result == 1) || (_result == -2))
	{
		printf(" 컴퓨터 WIN \n");
	}
	if ((_result == -1) || (_result == 2))
	{
		printf(" 나 WIN \n");
	}
}

void main()
{
	srand(time(NULL));

	PrintGameStart();
	ChooseMyHand();
	ChooseComHand();
	PrintHands();
	PrintGameResult();
}