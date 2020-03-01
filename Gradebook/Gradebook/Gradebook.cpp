// Gradebook.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <Windows.h>
#include "Gradebook.h"

int main()
{
	int nScore1 = 0;
	int nScore2 = 0;
	int nScore3 = 0;

	printf("input 3 score: \r\n");
	scanf_s("%d %d %d", &nScore1, &nScore2, &nScore3);

	char chGrade = GetGrade(nScore1, nScore2, nScore3);
	if (chGrade != NULL)
		printf("Grade: %c \r\n", GetGrade(nScore1, nScore2, nScore3));
	else
		printf("input error \r\n");

	system("pause");
    return 0;
}

char GetGrade(const int& nScore1, const int& nScore2, const int& nScore3)
{
	char chGrade;

	int nAvg = (nScore1 + nScore2 + nScore3) / 3;

	if (100 >= nAvg >= 90)
		chGrade = 'A';
	else if (90 >= nAvg >= 80)
		chGrade = 'B';
	else if (80 >= nAvg >= 70)
		chGrade = 'C';
	else if (70 >= nAvg >= 60)
		chGrade = 'D';
	else if (nAvg >= 0)
		chGrade = 'F';
	else
		chGrade = NULL;
		
	return chGrade;
}
