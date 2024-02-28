#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _myturn[3] = { 0 };

// 컴퓨터 선택도 _myturn[3]처럼 배열로 만들고 싶은데, 최종선택할 때 막혀서.....
// 일단 그냥 만들었어요
int _comturn1 = 0; 
int _comturn2 = 0;
int _comFin = 0;
int _result = 0;

enum MyRSP {
	SCISSOR,
	ROCK,
	PAPER
};

void PrintGame()
{
	printf("=======================================\n");
	printf("     가위바위보 하나 빼기를 시작합니다     \n");
	printf("=======================================\n");
}

void SelecRsp()
{
	printf(" [ 가위 : 0, 바위 : 1, 보 : 2 ]\n\n");
	printf(" 당신의 오른쪽 선택 :");
	scanf_s("%d", &_myturn[0]);
	printf(" \n당신의 왼쪽 선택 :");
	scanf_s("%d", &_myturn[1]);

	printf("\n 컴퓨터가 선택 중 입니다 ```\n");

	int _comturn1 = rand() % 3;
	int _comturn2 = rand() % 3;
	system("cls");
}

void PrintResult()
{
	printf(" [ 가위 : 0, 바위 : 1, 보 : 2 ]\n\n");
	printf(" ┌ 당신의 1차 선택 결과\n");

	printf(" 오른손 : %d │ 왼손 : %d\n", _myturn[0], _myturn[1]);

	printf(" ┌ 컴퓨터의 1차 선택 결과\n");
	printf(" 오른손 : %d │ 왼손 : %d\n", _comturn1, _comturn2);

}

void SelLast()
{
	printf(" 최종적으로 낼 손을 골라주세요 \n\n");
	printf(" [ 오른손 : 0 │ 왼손 : 1 ]\n");
	scanf_s("%d", &_myturn[2]);
	if (_myturn[2] == 0)
	{
		_comFin = _comturn1;
		printf(" 당신의 최종 선택 : %d", _comFin);
		printf(" ┣ 오른손 \n");
	}if (_myturn[2] == 1)
	{
		_comFin = _comturn1;
		printf(" 당신의 최종 선택 : %d", _comFin);
		printf(" ┣ 왼손 \n\n");
	}


	int _comsel = rand() % 2;
	
	if (_comsel == 0)
	{
		_comFin = _comturn1;
		printf(" 컴퓨터의 최종 선택 : %d", _comFin);
		printf(" ┣ 오른손 \n");
	}
	else if (_comsel == 1)
	{
		_comFin = _comturn2;
		printf(" 컴퓨터의 최종 선택 : %d", _comFin);
		printf(" ┣ 왼손 \n");
	}
	
}

void PrintGameResult()
{
	_result = _comFin - _myturn[2];

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

int main()
{
	// 1. 가위바위보 하나 빼기
	srand(time(NULL));
	PrintGame();
	SelecRsp();
	PrintResult();
	SelLast();
	PrintGameResult();
}