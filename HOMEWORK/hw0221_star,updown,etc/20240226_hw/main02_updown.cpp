#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int ranNum = rand() % 100 + 1;
	printf("%d", ranNum);

	printf("\n\n");
	printf(" UP DOWN ������ �����մϴ�\n");

	int myNum = 0;
	
	while (ranNum != myNum)
	{
		printf("����� ���ڸ� �Է����ּ��� :");
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
			printf(" ������ ������ϴ�. \n");
			exit(0);
		}
	}


}