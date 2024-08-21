#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// 有一个数字矩阵，矩阵的每行从左到右是递增的，
// 矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

void find_k(int arr2[3][3], int k, int x, int y)
{
	while (arr2[x][y] != k && x >= 0 && y >= 0)
	{
		if (k < arr2[x][y])//当右上角值大于k时排除k所在的一列反之排除所在行
		{
			y--;
		}
		else
		{
			x++;
		}

	}
	if (arr2[x][y] == k)
		printf("找到了，下标为%d %d\n ", x, y);
	else
		printf("找不到\n");
}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//以3*3矩阵为例
//	int k = 0;//要查找的值
//	int x = 0;
//	int y = 2;//行数和列数的下标
//	scanf_s("%d", &k);
//	find_k(arr, k, x, y);
//	return 0;
//}
