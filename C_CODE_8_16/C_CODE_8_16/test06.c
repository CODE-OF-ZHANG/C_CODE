#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 求出0～100000之间的所有“水仙花数”并输出。

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
//	for (int i = 0; i <= 100000; i++)
//	{
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000) % 10;
//		f = (i / 100000) % 10;
//		int sum = (a * a * a) + (b * b * b) +
//			(c * c * c) + (d * d * d) + 
//			(e * e * e) + (f * f * f);
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
