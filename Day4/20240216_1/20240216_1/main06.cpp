#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//�Է�
	//input
	
	// scanf����ϴ� ���� ������ ���� �Է� �Լ�
	//int input1 = 0;
	//
	////scanf_s("%d",&������)
	//
	//scanf_s("%d", &input1);
	//printf("����� �Է��� �Լ� : %d", input1);

	// �ǽ�
	 
	// ���� 2���� �Է¹޾Ƽ� �ΰ� ������ ���ڸ� ����ϵ���

	srand(time(NULL));
	int input1, input2 = 0;
	int randNum = 0;

	printf(" \n���� 1�� �Է����ּ��� :");
	scanf_s("%d", &input1);
	printf(" \n���� 2�� �Է����ּ��� :");
	scanf_s("%d", &input2);

	int temp = input2 - input1 + 1;
	randNum = input1 + rand() % temp;

	printf(" %d ~ %d ������ ���� �� ���� ���� ��� : %d", input1, input2, randNum);



}