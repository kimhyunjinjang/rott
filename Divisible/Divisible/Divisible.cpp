// Divisible.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	int nNum = 0;
	int nDiv = 0;
	int nDiv2 = 0;
	
	printf("enter Number :");
	scanf_s("%d", &nNum);

	printf("enter Number to divide :");
	scanf_s("%d %d", &nDiv, &nDiv2);

	if (IsDivisible(nNum, nDiv, nDiv2))
		printf("true \r\n");
	else
		printf("false \r\n");

	system("pause");
    return 0;
}

bool IsDivisible(const int num, const int div1, const int div2)
{
	if (num%div1 == 0 && num%div2 == 0)
		return TRUE;
	else
		return FALSE;
}