// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "ConsoleApplication1.h"


int main()
{
	string strInput;

	cout << "input words : ";
	getline(cin, strInput);

	makeReverse(strInput);

	cout << "reverse words : " << strInput << endl;
	
	system("pause");

    return 0;
}

void makeReverse(string& refstrInput)
{
	string strReversed;
	int nLen = refstrInput.length();

	for (int i = 0; i < nLen; i++)
	{
		strReversed += refstrInput.substr(nLen - i - 1, 1);
	}

	refstrInput = strReversed;
}