#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
// 编写一个算法来判断一个数 n 是不是快乐数。
// 「快乐数」 定义为：
// 对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
// 然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
// 如果这个过程 结果为 1，那么这个数就是快乐数。
// 如果 n 是 快乐数 就返回 true ；不是，则返回 false 。

int bitsum(int n)
{
	int sum = 0;
	while (n)
	{
		int tmp = n % 10;
		sum += tmp * tmp;
		n /= 10;
	}
	return sum;
}

bool isHappy(int n)
{
	int slow = n, fast = bitsum(n);
	while (slow != fast)
	{
		slow = bitsum(slow);
		fast = bitsum(bitsum(fast));
	}
	return slow == 1;
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (isHappy(n))
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//}
