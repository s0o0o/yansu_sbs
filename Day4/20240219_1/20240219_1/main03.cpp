#include <iostream>

using namespace std;

void main()
{
	//if �� �ǽ�

	// 1. ���� 4���� �Է¹޴´�.
	// 2. ������ ������ 400�� �̻��̸� A�� ����Ѵ�.
	// 3. ������ ������ 350�� �̻��̸� B�� ����Ѵ�.
	// 4. ������ ������ 300�� �̻��̸� C�� ����Ѵ�.
	// 5. �� �̸��̸� D�� ����Ѵ�.

	// IF / else if / else �� Ȱ��

	int num1, num2, num3, num4;
	printf(" \n���� 1 �Է� : ");
	scanf_s("%d", &num1);

	printf(" \n���� 2 �Է� : ");
	scanf_s("%d", &num2);

	printf(" \n���� 3 �Է� : ");
	scanf_s("%d", &num3);

	printf(" \n���� 4 �Է� : ");
	scanf_s("%d", &num4);

	int total = num1 + num2 + num3 + num4;

	printf("\n\n");

	if (total >= 400)
	{
		printf(" ����� ������ A �Դϴ� ( %d )\n", total);
	}
	else if ((total >= 350) && (total < 400))
	{
		printf(" ����� ������ B �Դϴ� ( %d )\n", total);
	}
	else if ((total >= 300) && (total < 350))
	{
		printf(" ����� ������ C �Դϴ� ( %d )\n", total);
	}
	else
	{
		printf(" ����� ������ D �Դϴ� ( %d )\n", total);
	}


}