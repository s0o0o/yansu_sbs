#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	printf(" 로또 번호 생성기 \n\n");

	int lottoNum[45] = {};
	//int resultNum[7] = {};

	for (int i = 0; i < 45; i++)
	{
		lottoNum[i] = i + 1;
	}

	for (int i = 0; i < 1000; i++) // 섞음
	{
		int firstIndex = rand() % 45;
		int secondIndex = rand() % 45;
		int temp = lottoNum[firstIndex];
		lottoNum[firstIndex] = lottoNum[secondIndex];
		lottoNum[secondIndex] = temp;
	}

	printf(" 로또 번호를 추출합니다 ```\n");
	printf("\n\n 오늘의 로또 번호\n");
	for (int i = 0; i < 7; i++)
	{
		//resultNum[i] = rand() % *lottoNum[]; 
		// 결과값 따로 배열로 만들고, 거기에 섞은 lottoNum[45]을 넣고 싶은데
		// 어떻게 하나요.....
		printf(" %d ", lottoNum[i]); // 일단은
	}
	printf("\n");
}