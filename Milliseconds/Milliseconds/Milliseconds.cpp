// Milliseconds.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int hour = 0;
	int min = 0;
	int sec = 0;

	printf("past(0, 1, 1) == 61000 \r\n");
	printf("input hour, min, sec : ");
	scanf_s("%d %d %d", &hour, &min, &sec);

	printf("past(%d ,%d, %d) == ", hour, min, sec);

	sec = sec * 1000;
	min = min * 60 * 1000;
	hour = hour * 60 * 60 * 1000;

	printf("%d \r\n", sec + min + hour);

	system("pause");
    return 0;
}

