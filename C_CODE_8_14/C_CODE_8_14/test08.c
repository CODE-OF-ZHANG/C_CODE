#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//  获得月份天数

int is_Leap_year(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int get_year_month(int year, int month)
{
    int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int len = sizeof(day) / sizeof(day[0]);
    if (month == 2 && is_Leap_year(year))
        day[month] += 1;
    return day[month];
}

//int main()
//{
//    int year = 0, month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int ret = get_year_month(year, month);
//        printf("%d\n", ret);
//    }
//    return 0;
//}
