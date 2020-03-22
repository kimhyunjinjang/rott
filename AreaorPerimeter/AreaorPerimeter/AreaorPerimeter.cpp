// AreaorPerimeter.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	int nNum = 0;
	int nNum2 = 0;
	int nReturn = 0;

	printf("enter 2 sides :");
	scanf_s("%d %d", &nNum, &nNum2);

	if (nNum == nNum2)
		nReturn = nNum * nNum;
	else
		nReturn = (nNum * 2) + (nNum2 * 2);

	printf("area_or_perimeter(%d, %d) --> %d \r\n", nNum, nNum2, nReturn);

	system("pause");
    return 0;
}

