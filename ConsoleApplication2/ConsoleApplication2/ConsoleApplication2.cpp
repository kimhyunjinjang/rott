// ConsoleApplication2.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
