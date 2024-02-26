#include <iostream>
#include <time.h>

using namespace std;

int _myHand = 0; // �� ��
int _comHand = 0; // ��ǻ�� �� (���� ��)
int _result = 0;
int _sel = 0;
int _mycount = 0; // ----->>>> �� �¸��� 5�� �ɽ� ���� ����
// ----->>>> �� ���� 10�� �ɽ� ���� ����
int _gamecount = 0;

void PrintGameStart()
{
	printf("������������������������������������������������������������������������������������������������\n");
	printf("��          *** ROCK SCISSOR PAPER ***          ��\n");
	printf("������������������������������������������������������������������������������������������������\n");
}

void SelecMode()
{
	printf(" ���� ��带 �������ּ���. \n");
	printf(" 5�� �̱�� --> 0�� �Է����ּ���. \n");
	printf(" 10�� �����ϱ� --> 1�� �Է����ּ���. \n");
	scanf_s("%d", &_sel);
}

void ChooseMyHand()
{
	cout << endl;
	printf("%d ��° �� �� ````\n", _gamecount + 1);
	cout << " ���� ( 0 ) , ���� ( 1 ) , �� ( 2 ) " << endl;
	cout << " ����� ������ ����ּ��� :";
	cin >> _myHand;
}

void ChooseComHand()
{
	cout << " ��ǻ�Ͱ� ���� ���Դϴ� ``` " << endl;
	_comHand = rand() % 3;
}

void PrintHands()
{
	printf(" \n\n ���� ��� ( ���� ( 0 ) , ���� ( 1 ) , �� ( 2 ) \n\n");
	printf(" �� : %d \n", _myHand);
	printf(" ��ǻ�� : %d \n", _comHand);
}

void PrintGameResult()
{
	_result = _comHand - _myHand;

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
		_mycount++;
	}
	_gamecount++;
}

void PlayGame()
{
	srand(time(NULL));

	PrintGameStart();

	while (_gamecount < 10)
	{
		ChooseMyHand();
		ChooseComHand();
		PrintHands();
		PrintGameResult();
	}

	printf(" ������ �����մϴ�...\n");
}


void WinGame()
{
	srand(time(NULL));

	PrintGameStart();

	while (_mycount < 5)
	{
		ChooseMyHand();
		ChooseComHand();
		PrintHands();
		PrintGameResult();
	}
	printf(" ������ �����մϴ�...\n");
}

void main()
{
	SelecMode();
	if (_sel == 0)
	{
		WinGame();
	}
	if (_sel == 1)
	{
		PlayGame();
	}
}