#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 编写一个函数实现n的k次方，使用递归实现。
// n^k = n * n * n ... * n

int func(int n, int k)
{
	if (k == 1)
		return n;
	else
		return n * func(n, k - 1);
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = func(n, k);
//	printf("%d\n", ret);
//	return 0;
//}
