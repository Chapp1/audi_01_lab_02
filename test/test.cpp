// test.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"


int main()
{//0001
	double x, y;
	printf("Enter coordinats M (x, y): ");
	int cn = scanf_s("%lf %lf", &x, &y);
	if (cn != 2)
	{
		printf("Invalid input!\n");
		return -1;
	}
	if (x < 0 && x > -1 && y < 1 && y > -1)
	{
		printf("M is in circles\n");
	}
	else
	{
		printf("M is out of circles\n");
	}
	getchar();
	return 0;
}