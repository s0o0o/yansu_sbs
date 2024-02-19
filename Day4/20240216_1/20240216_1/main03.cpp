#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	// 난수
	// 랜덤수
	// 
	// 랜덤 쓰는 법(암기과정)
	// 1. #include <time.h> 사용
	// 2. main 문 안에서 바로 srand(time(NULL)); 명령을 실행
	// 3. rand() 를 사용하면 랜덤수가 뽑힘.

	srand(time(NULL));
	int myage;
	myage = rand() % 50;
	printf("myage is >> %d << \n", myage);
	printf("myage is >> %d << \n", rand());
	printf("myage is >> %d << \n", rand());
	printf("myage is >> %d << \n", rand());

	// srand(값);
	//   => rnad() 를 실행하면 컴퓨터에서 예정된 시드값을 뽑아옴
	//   => 예정된 시드값을 섞어주는 함수가 srand
	// 
	// time(NULL)
	//  => 
	//


}