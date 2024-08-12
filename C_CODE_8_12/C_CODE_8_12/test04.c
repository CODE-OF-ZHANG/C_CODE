#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 递归方式实现打印一个整数的每一位

void print_num(int n)
{
	if (n >= 10)
		print_num(n / 10);
	printf("%d ", n % 10);
}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print_num(num);
//	return 0;
//}
