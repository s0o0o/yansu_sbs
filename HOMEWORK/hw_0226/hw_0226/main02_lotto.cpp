#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	printf(" �ζ� ��ȣ ������ \n\n");

	int lottoNum[45] = {};
	//int resultNum[7] = {};

	for (int i = 0; i < 45; i++)
	{
		lottoNum[i] = i + 1;
	}

	for (int i = 0; i < 1000; i++) // ����
	{
		int firstIndex = rand() % 45;
		int secondIndex = rand() % 45;
		int temp = lottoNum[firstIndex];
		lottoNum[firstIndex] = lottoNum[secondIndex];
		lottoNum[secondIndex] = temp;
	}

	printf(" �ζ� ��ȣ�� �����մϴ� ```\n");
	printf("\n\n ������ �ζ� ��ȣ\n");
	for (int i = 0; i < 7; i++)
	{
		//resultNum[i] = rand() % *lottoNum[]; 
		// ����� ���� �迭�� �����, �ű⿡ ���� lottoNum[45]�� �ְ� ������
		// ��� �ϳ���.....
		printf(" %d ", lottoNum[i]); // �ϴ���
	}
	printf("\n");
}