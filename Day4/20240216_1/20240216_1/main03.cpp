#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	// ����
	// ������
	// 
	// ���� ���� ��(�ϱ����)
	// 1. #include <time.h> ���
	// 2. main �� �ȿ��� �ٷ� srand(time(NULL)); ����� ����
	// 3. rand() �� ����ϸ� �������� ����.

	srand(time(NULL));
	int myage;
	myage = rand() % 50;
	printf("myage is >> %d << \n", myage);
	printf("myage is >> %d << \n", rand());
	printf("myage is >> %d << \n", rand());
	printf("myage is >> %d << \n", rand());

	// srand(��);
	//   => rnad() �� �����ϸ� ��ǻ�Ϳ��� ������ �õ尪�� �̾ƿ�
	//   => ������ �õ尪�� �����ִ� �Լ��� srand
	// 
	// time(NULL)
	//  => 
	//


}