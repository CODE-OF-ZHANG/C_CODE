#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ʵ�ֺ����ж�year�ǲ������ꡣ

void is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}
