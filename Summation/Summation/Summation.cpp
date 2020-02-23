// Summation.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <Windows.h>

int main()
{
	int num = 0;
	int total = 0;
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		total += i;
		printf("%d", i);

		if (i == num - 1)
		{
			printf("\r\n");
			break;
		}
			
		
		printf("+");
	}

	printf("summation(%d) -> %d \r\n", num, total);
	system("pause");
    return 0;
}

