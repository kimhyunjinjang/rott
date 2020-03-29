// Century.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	int nYear = 0;
	int nCentury = 0;

	printf("input a year :");
	scanf_s("%d", &nYear);

	nCentury = nYear / 100;
	if (nYear % 100 != 0)
		nCentury += 1;

	printf("centuryFromYear(%d) returns (%d) \r\n", nYear, nCentury);

	system("pause");
    return 0;
}

