#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 给你一个长度固定的整数数组 arr ，
// 请你将该数组中出现的每个零都复写一遍，并将其余的元素向右平移。

void duplicateZeros(int* arr, int arrSize)
{
	int cur = 0, dest = -1;
	// 找到最后一个要复写的数
	while (cur < arrSize)
	{
		if (arr[cur] != 0) dest++;
		else dest += 2;
		if (dest >= arrSize - 1) break;
		cur++;
	}
	// 处理边界情况
	if (dest == arrSize)
	{
		arr[arrSize - 1] = 0;
		cur--, dest -= 2;
	}
	// 从后往前进行双指针
	while (cur >= 0)
	{
		if (arr[cur] != 0)
		{
			arr[dest--] = arr[cur--];
		}
		else
		{
			arr[dest--] = 0;
			arr[dest--] = 0;
			cur--;
		}
	}
}

//int main()
//{
//	int arr[] = { 1,0,2,3,0,4,5,0 };
//	int numsize = sizeof(arr) / sizeof(arr[0]);
//	duplicateZeros(arr, numsize);
//	for (int i = 0; i < numsize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
