#include <iostream>

using namespace std;

void main()
{
	//if 문 실습

	// 1. 점수 4개를 입력받는다.
	// 2. 점수의 총합이 400점 이상이면 A를 출력한다.
	// 3. 점수의 총합이 350점 이상이면 B를 출력한다.
	// 4. 점수의 총합이 300점 이상이면 C를 출력한다.
	// 5. 그 미만이면 D를 출력한다.

	// IF / else if / else 문 활용

	int num1, num2, num3, num4;
	printf(" \n점수 1 입력 : ");
	scanf_s("%d", &num1);

	printf(" \n점수 2 입력 : ");
	scanf_s("%d", &num2);

	printf(" \n점수 3 입력 : ");
	scanf_s("%d", &num3);

	printf(" \n점수 4 입력 : ");
	scanf_s("%d", &num4);

	int total = num1 + num2 + num3 + num4;

	printf("\n\n");

	if (total >= 400)
	{
		printf(" 당신의 점수는 A 입니다 ( %d )\n", total);
	}
	else if ((total >= 350) && (total < 400))
	{
		printf(" 당신의 점수는 B 입니다 ( %d )\n", total);
	}
	else if ((total >= 300) && (total < 350))
	{
		printf(" 당신의 점수는 C 입니다 ( %d )\n", total);
	}
	else
	{
		printf(" 당신의 점수는 D 입니다 ( %d )\n", total);
	}


}