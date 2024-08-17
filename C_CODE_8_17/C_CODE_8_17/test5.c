#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 输入一个整数数组，实现一个函数，
// 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
// 所有偶数位于数组的后半部分。

void Switch(int arr[], int len)
{
	int* left = arr, * right = arr + len - 1;
	while (left < right)
	{
		while ((left < right) && (*left % 2 != 0))
		{
			left++;
		}
		while ((left < right) && (*right % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}

//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Switch(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
