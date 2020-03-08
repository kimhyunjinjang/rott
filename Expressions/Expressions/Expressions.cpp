// Expressions.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "Expressions.h"

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	printf("input 3 numbers (range 1~10): \r\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("Max number is: %d \r\n", expressionsMatter(num1, num2, num3));

	system("pause");
    return 0;
}

int expressionsMatter(const int num1, const int num2, const int num3)
{
	int result[4] = { 0 };
	int max = 0;

	result[0] = num1 * (num2 + num3);
	result[1] = num1 * num2 * num3;
	result[2] = num1 + (num2 * num3);
	result[3] = (num1 + num2) * num3;

	max = result[0];
	for (int i = 1; i < 4; i++)
	{
		if (max < result[i])
			max = result[i];
	}

	return max;
}