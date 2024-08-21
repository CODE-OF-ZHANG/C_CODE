#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

void left_revolve(char* arr, int n, int len)
{
	n = n % len;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		char copy = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[j] = copy;
	}
}

void judge(char* arr1, char* arr2)
{
	int ret = strcmp(arr1, arr2);
	if (ret == 0)
	{
		printf("判断结果：相同\n");
	}
	else
	{
		printf("判断结果：不相同\n");
	}
}

//int main()
//{
//	int n = 0;
//	char arr1[] = "ABCD";
//	char arr2[] = "CDAB";
//	printf("左旋前：%s\n", arr1);
//	printf("判断字符串：%s\n", arr2);
//	int len = strlen(arr1);
//	printf("左旋几个字符：");
//	scanf("%d", &n);
//	left_revolve(arr1, n, len);
//	printf("左旋后：%s\n", arr1);
//	judge(arr1, arr2);
//	return 0;
//}
