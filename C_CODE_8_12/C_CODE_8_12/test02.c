#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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
