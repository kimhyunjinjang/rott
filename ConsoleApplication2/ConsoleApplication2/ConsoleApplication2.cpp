// ConsoleApplication2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;
#include "ConsoleApplication2.h"

int main()
{
	int nNum;
	cout << "input number : ";
	cin >> nNum;

	makeNegative(nNum);
	cout << "output number : " << nNum << endl;

	system("pause");
    return 0;
}

void makeNegative(int& nNum)
{
	if (nNum > 0)
	{
		nNum = ~nNum + 1;
	}
}
