#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
// 实现一个函数，可以左旋字符串中的k个字符。

void left_move(char* str, size_t len, int k)
{
	assert(str);
	k %= len;
	while (k--)
	{
		char tmp = str[0];
		for (int i = 0; i < len - 1; i++)
		{
			str[i] = str[i + 1];
		}
		str[len - 1] = tmp;
	}
}

//int main()
//{
//	char str[] = "abcde";
//	size_t len = strlen(str);
//	int k = 0;  // 左旋k次
//	scanf("%d", &k);
//	left_move(str, len, k);
//	printf("%s\n", str);
//	return 0;
//}
