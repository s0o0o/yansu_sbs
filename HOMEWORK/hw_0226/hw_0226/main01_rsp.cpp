#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _myturn[3] = { 0 };

// ��ǻ�� ���õ� _myturn[3]ó�� �迭�� ����� ������, ���������� �� ������.....
// �ϴ� �׳� ��������
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
	printf("     ���������� �ϳ� ���⸦ �����մϴ�     \n");
	printf("=======================================\n");
}

void SelecRsp()
{
	printf(" [ ���� : 0, ���� : 1, �� : 2 ]\n\n");
	printf(" ����� ������ ���� :");
	scanf_s("%d", &_myturn[0]);
	printf(" \n����� ���� ���� :");
	scanf_s("%d", &_myturn[1]);

	printf("\n ��ǻ�Ͱ� ���� �� �Դϴ� ```\n");

	int _comturn1 = rand() % 3;
	int _comturn2 = rand() % 3;
	system("cls");
}

void PrintResult()
{
	printf(" [ ���� : 0, ���� : 1, �� : 2 ]\n\n");
	printf(" �� ����� 1�� ���� ���\n");

	printf(" ������ : %d �� �޼� : %d\n", _myturn[0], _myturn[1]);

	printf(" �� ��ǻ���� 1�� ���� ���\n");
	printf(" ������ : %d �� �޼� : %d\n", _comturn1, _comturn2);

}

void SelLast()
{
	printf(" ���������� �� ���� ����ּ��� \n\n");
	printf(" [ ������ : 0 �� �޼� : 1 ]\n");
	scanf_s("%d", &_myturn[2]);
	if (_myturn[2] == 0)
	{
		_comFin = _comturn1;
		printf(" ����� ���� ���� : %d", _comFin);
		printf(" �� ������ \n");
	}if (_myturn[2] == 1)
	{
		_comFin = _comturn1;
		printf(" ����� ���� ���� : %d", _comFin);
		printf(" �� �޼� \n\n");
	}


	int _comsel = rand() % 2;
	
	if (_comsel == 0)
	{
		_comFin = _comturn1;
		printf(" ��ǻ���� ���� ���� : %d", _comFin);
		printf(" �� ������ \n");
	}
	else if (_comsel == 1)
	{
		_comFin = _comturn2;
		printf(" ��ǻ���� ���� ���� : %d", _comFin);
		printf(" �� �޼� \n");
	}
	
}

void PrintGameResult()
{
	_result = _comFin - _myturn[2];

	if (_result == 0)
	{
		printf(" �����ϴ�. \n");
	}
	if ((_result == 1) || (_result == -2))
	{
		printf(" ��ǻ�� WIN \n");
	}
	if ((_result == -1) || (_result == 2))
	{
		printf(" �� WIN \n");
	}
}

int main()
{
	// 1. ���������� �ϳ� ����
	srand(time(NULL));
	PrintGame();
	SelecRsp();
	PrintResult();
	SelLast();
	PrintGameResult();
}