// CalculateBMI.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <Windows.h>

int main()
{
	float nWeight = 0;
	float nHeight = 0;
	float nBMI = 0;

	printf("enter weight :");
	scanf_s("%f", &nWeight);

	printf("enter height :");
	scanf_s("%f", &nHeight);
	nHeight = nHeight / 100;

	nBMI = nWeight / (nHeight *  nHeight);

	if (nBMI <= 18.5)
		printf("Underweight \r\n");
	else if (nBMI <= 25.0)
		printf("Normal \r\n");
	else if (nBMI <= 30.0)
		printf("Overweight \r\n");
	else if (nBMI > 30)
		printf("Obese \r\n");

	system("pause");
    return 0;
}

