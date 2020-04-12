// TwiceAsOld.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int nFather = 0;
	int nSun = 0;

	printf("input father age: \r\n");
	scanf_s("%d", &nFather);

	printf("input sun age: \r\n");
	scanf_s("%d", &nSun);

	printf("The answer is: %d \r\n", CalculateYears(nFather, nSun));

	system("pause");
    return 0;
}

int CalculateYears(int Year1, int Year2)
{
	return abs(Year1 - 2 * Year2);
}