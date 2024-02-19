#include <iostream>
#include <time.h>

using namespace std;

int main()
{	
	srand(time(NULL));

	int num1, num2, num3,num4 = 0;

	printf(" \n\t첫번째 숫자를 입력해주세요 :");
	scanf_s("%d", &num1);

	printf(" \n\t두번째 숫자를 입력해주세요 :");
	scanf_s("%d", &num2);

	printf(" \n\t세번째 숫자를 입력해주세요 :");
	scanf_s("%d", &num3);

	printf(" \n\t네번째 숫자를 입력해주세요 :");
	scanf_s("%d", &num4);

	int temp;
	temp = num2 - num1 + 1;

	int random = num1 + rand() % temp;
	
	printf(" \n\n\t첫번째 숫자와 두번째 숫자 사이 랜덤 값 : %d\n ", random);

	int total = 0;
	total = (random - num3) * num4;

	printf(" \n랜덤값( %d )에 세번째 숫자( %d )를 빼고 네번째 숫자 ( %d )를 곱한다\n", random, num3, num4);
	printf(" \n\t( %d - %d ) * %d = \n", random, num3, num4);
	printf("  =================================\n");
	printf(" \n\t최종 값 : %d\n\n", total);

}