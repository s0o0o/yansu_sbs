#include <iostream>
#include <time.h>

using namespace std;

void main()
{
	srand(time(NULL));
	//�ǽ�
	//0 ~ 30 ������ ���� ���ڸ� ����ϱ�

	// 1.
	int randNum = rand() % 31;
	printf(" 0 ~ 30 ���� ���� ���� ��� : %d\n\n", randNum);

	// 2. 0 ~ 100 ���� ���� �ֱ�
	int random1 = rand() % 101;
	printf(" random1 : %d\n\n", random1);

	// 3. 
	// 25 ~ 40 ������ ���� ���� ����ϱ�

	int randNum2 = rand() % 16 + 25;
	printf(" 25 ~ 40 ������ ���� ���� ��� : %d\n\n", randNum2);

	// 4.
	// 150 ~ 270 ������ ���� ���� ����ϱ�
	int randNum3 = rand() % 121 + 150;
	printf(" 150 ~ 270 ������ ���� ���� ��� : %d\n\n", randNum3);


}