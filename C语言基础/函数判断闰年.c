#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void is_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d 是闰年\n", year);
	}
	else
	{
		printf("%d 不是闰年", year);
	}
}

int main3()
{
	int year = 0;
	scanf("%d", &year);
	is_year(year);
	return 0;
}