#include <iostream>
#include <time.h>

using namespace std;

int main()
{	
	srand(time(NULL));

	int num1, num2, num3,num4 = 0;

	printf(" \n\tù��° ���ڸ� �Է����ּ��� :");
	scanf_s("%d", &num1);

	printf(" \n\t�ι�° ���ڸ� �Է����ּ��� :");
	scanf_s("%d", &num2);

	printf(" \n\t����° ���ڸ� �Է����ּ��� :");
	scanf_s("%d", &num3);

	printf(" \n\t�׹�° ���ڸ� �Է����ּ��� :");
	scanf_s("%d", &num4);

	int temp;
	temp = num2 - num1 + 1;

	int random = num1 + rand() % temp;
	
	printf(" \n\n\tù��° ���ڿ� �ι�° ���� ���� ���� �� : %d\n ", random);

	int total = 0;
	total = (random - num3) * num4;

	printf(" \n������( %d )�� ����° ����( %d )�� ���� �׹�° ���� ( %d )�� ���Ѵ�\n", random, num3, num4);
	printf(" \n\t( %d - %d ) * %d = \n", random, num3, num4);
	printf("  =================================\n");
	printf(" \n\t���� �� : %d\n\n", total);

}