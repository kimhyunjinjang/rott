// Score.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string scores;
	int num = 0;
	int Arr[1000];
	UINT myScore = 0;

	printf("input scores: \r\n");
	getline(cin, scores);

	printf("input your score: \r\n");
	cin >> myScore;
	
	char* buff = new char[1000];
	strcpy(buff, scores.c_str());

	char* tok = strtok(buff, " ");
	while (tok != nullptr)
	{
		Arr[num++] = atoi(string(tok).c_str());
		tok = strtok(nullptr, " ");
	}

	UINT average = 0;
	UINT sum = 0;

	for (int n = 0; n < num; n++)
	{
		sum += Arr[n];
	}

	average = sum / num;

	if (average < myScore)
		printf("TRUE. You're better. \r\n");
	else
		printf("FALSE. You're worse. \r\n");


	system("pause");
	return 0;
}

