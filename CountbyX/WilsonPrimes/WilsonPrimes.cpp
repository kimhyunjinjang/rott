// WilsonPrimes.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	UINT num1 = 0;
	UINT num2 = 0;

	printf("enter 2 number: ");
	scanf_s("%d %d", &num1, &num2);

	UINT* arrNum = new UINT[num2];
	memset(arrNum, 0, num2 * sizeof(UINT));
	
	for (int i = 0; i < num2; i++)
	{
		if (i == 0)
			arrNum[0] = num1;
		else
			arrNum[i] = arrNum[i - 1] + num1;

		printf("%d ", arrNum[i]);
	}

	delete arrNum;
	system("pause");
    return 0;
}
