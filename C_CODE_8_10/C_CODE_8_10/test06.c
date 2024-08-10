#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 编写代码在一个整形有序数组中查找具体的某个数

int bin_search(int arr[], int left, int right, int val)
{
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < val)
		{
			left = mid + 1;
		}
		else if (arr[mid] > val)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int val = 0;
//	scanf("%d", &val);
//	int ret = bin_search(arr, arr[0], arr[len - 1], val);
//	printf("%d\n", ret);
//	return 0;
//}
