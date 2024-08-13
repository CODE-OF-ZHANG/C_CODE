#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 创建一个整形数组，完成对数组的操作
// 实现函数init() 初始化数组为全0
// 实现print()  打印数组的每个元素
// 实现reverse()  函数完成数组元素的逆置。

void init(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int len)
{
	int left = 0, right = len - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, len);
//	print(arr, len);
//	init(arr, len);
//	print(arr, len);
//	return 0;
//}
