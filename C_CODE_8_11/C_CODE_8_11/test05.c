#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ʵ��һ�������������������������ݡ�

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
//	printf("����ǰ: n = %d  m = %d\n", n, m);
//	Swap(&n, &m);
//	printf("������: n = %d  m = %d\n", n, m);
//	return 0;
//}
