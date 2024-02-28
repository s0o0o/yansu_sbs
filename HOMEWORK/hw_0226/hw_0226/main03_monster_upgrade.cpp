#include <iostream>
#include <time.h>
using namespace std;

// ���� 2.
	// TEXT RPG �����...

	//  �� ���ݷ�, ü��(HP) , X(0) , Y(0) �� �ְ�
	// 1. ������ �����ϸ�
	//    �����¿�� �̵��� �� �ְ� �Ѵ�.
	// 2. �� ĭ ������ �� ���� �濡 �����Ѵ�.
	// 3. �濡���� ���Ϳ� ����ġ�µ�,
	// 4. ������ ���ݷ��� 1 ~ 10 ����, HP �� 5~10 ���� (����)
	// 5. ���Ϳ� ���� �Ѵ뾿 ������.
	// 6. ���Ͱ� ������ �ٸ� ������ �̵� ����
	// 7. ���� 5�� �����̰ų�
	// 8. X(2), Y(1) ������ ���� ������ Ŭ���� �ȴ�.
	// 9. X(1), Y(1) ������ ���� ������ ��
	//   ������ ü�� 50, ���ݷ� 20
	// 10. ������ ���� ������ ������ ������.

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
	cout << "    ���Ϳ� �����ƽ��ϴ�.      ��";
	_monsterHp = 10 + rand() % 6;
	_monsterAttack = 1 + rand() % 10;
	printf("\n\t\t\t\t�� ������ ���� ( ü�� : %d , ���ݷ� : %d )\n\n", _monsterHp, _monsterAttack);
}

void StartRsp()
{
	cout << " �̱� ������� ������ �����մϴ�. " << endl;
	printf(" [ ���� : 0, ���� : 1, �� : 2 ]\n");
	printf(" ����� ���� :");
	scanf_s("%d", &_myturn);
	_monturn = rand() % 3;
	printf("\n ������ ���� :%d", _monturn);

}

void PrintRspResult()
{
	cout << "\n �� ������������ �����մϴ� ��" << endl;
	while (_monsterHp > 0 && _hp > 0)
	{
		if (_myturn == _monturn)
		{
			printf(" �����ϴ�. ������������ �ٽ��մϴ�.\n\n");
			StartRsp();
		}
		if ((_myturn == 0 && _monturn == 2) || (_myturn == 1 && _monturn == 0) || (_myturn == 2 && _myturn == 1))
		{
			printf(" �̰���ϴ�. ���� �����մϴ�.\n\n");
			printf(" !!! ���͸� �����߽��ϴ� !!!\n");
			_monsterHp -= _attack;
			if (_monsterHp <= 0)
			{
				printf(" ������ ���� ü�� : 0\n");
				break;
			}
			else
			cout << " �� ������ ���� ü�� : " << _monsterHp << endl;
			StartRsp();
		}
		if ((_myturn == 2 && _monturn == 0) || (_myturn == 0 && _monturn == 1) || (_myturn == 1 && _myturn == 2))
		{
			printf(" �����ϴ�. ���Ͱ� �����մϴ�.\n\n");
			cout << " \n>>>> ���ظ� �Ծ����ϴ� ! <<<<\n " << endl;
			_hp -= _monsterAttack;
			cout << " �� �� ���� ü�� : " << _hp << endl;
			StartRsp();
		}
	}
}


void movePlayer()
{
	cout << " \n\n �� �÷��̾ ������ ������ ����ּ��� ( 0 : ��, 1 : ��, 2 : ��, 3 : �� )" << endl;
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
		printf(" !!! ������ �濡 ���Խ��ϴ� !!!\n");
		printf("   ��  ������ ü�� : 50\n");
		printf("   ��  ������ ���ݷ� : 20\n");

		while (_bossHp > 0 && _hp > 0) // ���� ������ �ݺ�
		{
			cout << " \n<< ������ �����߽��ϴ� >> " << endl;
			_bossHp -= _attack;
			cout << " �� ������ ���� ü�� : " << _bossHp << endl;

			cout << " \n>>>> ���ظ� �Ծ����ϴ� ! <<<< " << endl;
			_hp -= _bossAttack;
			cout << " �� �� ���� ü�� : " << _hp << endl;

		}
	}

}

int main()
{
	srand(time(NULL));
	printf("��������������������������������������������������������������������������������������������\n");
	printf("��              G A M E S T A R T             ��\n");
	printf("��������������������������������������������������������������������������������������������\n");
	cout << endl;

	while ((_moveCount < 5) || ((_x != 2) && (_y != 1))) // 5�� �̵� �Ǵ� x(2) ,y(1) �� �� ���� �ݺ�
	{
		movePlayer();
		printf(" ����� ���� ��ġ ( %d , %d )\n", _x, _y);
		printf(" \t\t\t\t�� ����� �⺻���� ( ü�� : %d , ���ݷ� : %d )\n", _hp, _attack);
		
		battleMonster();
		StartRsp();
		PrintRspResult();

		_moveCount++;

		if (_hp <= 0)
		{
			printf(" ���� �׾����ϴ�...\n");
			printf(" ������ �����մϴ� \n");
			break;
		}
		if (_monsterHp <= 0)
		{
			printf(" *** ���� �̰���ϴ� *** \n");
			printf(" ���� �̵��մϴ�. \n");
		}
	}

	return 0;
	// �÷��̾ �����δ�. (movePlayer)
	// �÷��̾� ������ ���� ��
}