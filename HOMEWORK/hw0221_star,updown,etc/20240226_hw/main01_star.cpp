#include <iostream>

using namespace std;

int main()
{
	printf("1\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("2\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("3\n");
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5-i; k++)
		{
			printf("");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("4\n");
	for (int i = 0; i < 5; i++)
	{
		for (int k = 0; k < 5 - i; k++)
		{
			printf("*");
		}
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
}