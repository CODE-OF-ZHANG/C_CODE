#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char a = 3;
//	// 00000000000000000000000000000011  --> ²¹Âë
//	char b = 127;
//	// 00000000000000000000000001111111  --> ²¹Âë
//	char c = a + b;
//	// 00000000000000000000000000000011
//	// 00000000000000000000000001111111
//
//	printf("%d\n", c);
//	return 0;
//}


struct Time
{
	int hour;
	short minute;
	char second;
};

struct Date
{
	short year;
	int month;
	char day;
};


int main()
{
	struct Time t;
	struct Date d;
	struct Time* pt;
	struct Date* pd;
	printf("%zd %zd %zd %zd", sizeof(t), sizeof(d), sizeof(pt), sizeof(pd));
	return 0;
}

