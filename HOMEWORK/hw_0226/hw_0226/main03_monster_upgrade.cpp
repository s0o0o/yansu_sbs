#include <iostream>
#include <time.h>
using namespace std;

// 숙제 2.
	// TEXT RPG 만들기...

	//  내 공격력, 체력(HP) , X(0) , Y(0) 가 있고
	// 1. 게임이 시작하면
	//    상하좌우로 이동할 수 있게 한다.
	// 2. 한 칸 움직일 때 마다 방에 입장한다.
	// 3. 방에서는 몬스터와 마주치는데,
	// 4. 몬스터의 공격력은 1 ~ 10 사이, HP 는 5~10 사이 (랜덤)
	// 5. 몬스터와 내가 한대씩 때린다.
	// 6. 몬스터가 죽으면 다른 방으로 이동 가능
	// 7. 방을 5번 움직이거나
	// 8. X(2), Y(1) 방으로 가면 게임이 클리어 된다.
	// 9. X(1), Y(1) 방으로 가면 보스의 방
	//   보스의 체력 50, 공격력 20
	// 10. 그전에 내가 죽으면 게임이 끝난다.

int _attack = 4;
int _hp = 80;
int _x = 0;
int _y = 0;
int _monsterHp = 0;
int _monsterAttack = 0;
int _bossHp = 50;
int _bossAttack = 20;

int _input;
int _moveCount = 0;

int _myturn = 0;
int _monturn = 0;

void battleMonster()
{
	cout << "    몬스터와 마주쳤습니다.      │";
	_monsterHp = 10 + rand() % 6;
	_monsterAttack = 1 + rand() % 10;
	printf("\n\t\t\t\t└ 몬스터의 정보 ( 체력 : %d , 공격력 : %d )\n\n", _monsterHp, _monsterAttack);
}

void StartRsp()
{
	cout << " 이긴 사람만이 공격이 가능합니다. " << endl;
	printf(" [ 가위 : 0, 바위 : 1, 보 : 2 ]\n");
	printf(" 당신의 선택 :");
	scanf_s("%d", &_myturn);
	_monturn = rand() % 3;
	printf("\n 몬스터의 선택 :%d", _monturn);

}

void PrintRspResult()
{
	cout << "\n ┗ 가위바위보를 시작합니다 ┛" << endl;
	while (_monsterHp > 0 && _hp > 0)
	{
		if (_myturn == _monturn)
		{
			printf(" 비겼습니다. 가위바위보를 다시합니다.\n\n");
			StartRsp();
		}
		if ((_myturn == 0 && _monturn == 2) || (_myturn == 1 && _monturn == 0) || (_myturn == 2 && _myturn == 1))
		{
			printf(" 이겼습니다. 내가 공격합니다.\n\n");
			printf(" !!! 몬스터를 공격했습니다 !!!\n");
			_monsterHp -= _attack;
			if (_monsterHp <= 0)
			{
				printf(" 몬스터의 남은 체력 : 0\n");
				break;
			}
			else
			cout << " ┣ 몬스터의 남은 체력 : " << _monsterHp << endl;
			StartRsp();
		}
		if ((_myturn == 2 && _monturn == 0) || (_myturn == 0 && _monturn == 1) || (_myturn == 1 && _myturn == 2))
		{
			printf(" 졌습니다. 몬스터가 공격합니다.\n\n");
			cout << " \n>>>> 피해를 입었습니다 ! <<<<\n " << endl;
			_hp -= _monsterAttack;
			cout << " ┣ 내 남은 체력 : " << _hp << endl;
			StartRsp();
		}
	}
}


void movePlayer()
{
	cout << " \n\n └ 플레이어가 움직일 방향을 골라주세요 ( 0 : 북, 1 : 남, 2 : 서, 3 : 동 )" << endl;
	cin >> _input;

	if (_input == 0)
	{
		_y--;
	}
	if (_input == 1)
	{
		_y++;
	}if (_input == 2)
	{
		_x--;
	}if (_input == 3)
	{
		_x++;
	}
}

void bossMap()
{
	if ((_x == 1) && (_y == 1))
	{
		printf(" !!! 보스의 방에 들어왔습니다 !!!\n");
		printf("   ┌  보스의 체력 : 50\n");
		printf("   └  보스의 공격력 : 20\n");

		while (_bossHp > 0 && _hp > 0) // 조건 성립시 반복
		{
			cout << " \n<< 보스를 가격했습니다 >> " << endl;
			_bossHp -= _attack;
			cout << " ┣ 보스의 남은 체력 : " << _bossHp << endl;

			cout << " \n>>>> 피해를 입었습니다 ! <<<< " << endl;
			_hp -= _bossAttack;
			cout << " ┣ 내 남은 체력 : " << _hp << endl;

		}
	}

}

int main()
{
	srand(time(NULL));
	printf("┌────────────────────────────────────────────┐\n");
	printf("│              G A M E S T A R T             │\n");
	printf("└────────────────────────────────────────────┘\n");
	cout << endl;

	while ((_moveCount < 5) || ((_x != 2) && (_y != 1))) // 5번 이동 또는 x(2) ,y(1) 일 때 까지 반복
	{
		movePlayer();
		printf(" 당신의 현재 위치 ( %d , %d )\n", _x, _y);
		printf(" \t\t\t\t┌ 당신의 기본정보 ( 체력 : %d , 공격력 : %d )\n", _hp, _attack);
		
		battleMonster();
		StartRsp();
		PrintRspResult();

		_moveCount++;

		if (_hp <= 0)
		{
			printf(" 내가 죽었습니다...\n");
			printf(" 게임을 종료합니다 \n");
			break;
		}
		if (_monsterHp <= 0)
		{
			printf(" *** 내가 이겼습니다 *** \n");
			printf(" 방을 이동합니다. \n");
		}
	}

	return 0;
	// 플레이어가 움직인다. (movePlayer)
	// 플레이어 죽으면 게임 끝
}