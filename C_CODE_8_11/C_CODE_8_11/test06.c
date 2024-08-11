#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 实现函数判断year是不是润年。

void is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}
