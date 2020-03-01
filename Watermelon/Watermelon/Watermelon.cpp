// Watermelon.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "Watermelon.h"
#include <atlstr.h>
using namespace std;

int main()
{
	bool bReturn = FALSE;
	int nDevide = 0;

	printf("input value to divide: \r\n");
	scanf_s("%d", &nDevide);

	if (IsDivide(nDevide))
		printf("devide(%d)==true \r\n", nDevide);
	else
		printf("devide(%d)==false \r\n", nDevide);

	system("pause");
    return 0;
}

bool IsDivide(int num)
{
	long number = num;
	long binary = 0;
	long sum = 0;
	long i = 1;

	while (number > 0)
	{
		binary = number % 2;
		sum += binary*i;
		number = number / 2;
		i *= 10;
	}

	CString strBinary;
	strBinary.Format(_T("%d"), sum);

	if (strBinary.Right(1) == '0')
		return TRUE;
	else
		return FALSE;
}