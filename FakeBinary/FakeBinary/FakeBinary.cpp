// FakeBinary.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	string result;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] - 5 < 0)
			result[i] = '0';
		else
			result[i] = '1';
	}

	cout << result << endl;

	system("pause");
    return 0;
}