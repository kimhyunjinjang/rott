// SquareSum.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	int nNum = 0;
	int nNum2 = 0;
	int nNum3 = 0;
	int nResult = 0;

	printf("Input three numbers to add squared : ");
	scanf_s("%d %d %d", &nNum, &nNum2, &nNum3);

	nResult = (nNum * nNum) + (nNum2 * nNum2) + (nNum3 * nNum3);

	printf("[%d, %d, %d] = %d \r\n", nNum, nNum2, nNum3, nResult);

	system("pause");
    return 0;
}

