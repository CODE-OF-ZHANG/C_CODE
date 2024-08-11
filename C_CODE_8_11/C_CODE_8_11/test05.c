#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 实现一个函数来交换两个整数的内容。

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//int main()
//{
//	int n = 10;
//	int m = 12;
//	printf("交换前: n = %d  m = %d\n", n, m);
//	Swap(&n, &m);
//	printf("交换后: n = %d  m = %d\n", n, m);
//	return 0;
//}
