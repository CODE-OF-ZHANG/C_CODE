#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}

//int main()
//{
//	int num = 0;
//	printf("请输入一个数： ");
//	scanf("%d", &num);
//	Printbit(num);
//	return 0;
//}
