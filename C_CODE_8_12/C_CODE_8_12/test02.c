#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

int DigitSum(int n)
{
	if (n % 10 == 0)
		return n;
	else
		return (n % 10) + DigitSum(n / 10);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	// printf("%d", 15 % 10);
//	return 0;
//}
