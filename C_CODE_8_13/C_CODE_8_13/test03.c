#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// �ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}

int Fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		int ret = 1;
		while (n > 0)
		{
			ret = ret * n;
			n--;
		}
		return ret;
	}
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}
