#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int ranNum = rand() % 100 + 1;
	printf("%d", ranNum);

	printf("\n\n");
	printf(" UP DOWN 게임을 시작합니다\n");

	int myNum = 0;
	
	while (ranNum != myNum)
	{
		printf("당신의 숫자를 입력해주세요 :");
		scanf_s("%d", &myNum);
		if (ranNum > myNum)
		{
			printf("\tUP\n");
		}
		if (ranNum < myNum)
		{
			printf("\tDOWN\n");
		}
		if (ranNum == myNum)
		{
			printf(" 정답을 맞췄습니다. \n");
			exit(0);
		}
	}


}