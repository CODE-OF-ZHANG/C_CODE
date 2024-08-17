#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ����һ���������飬ʵ��һ��������
// �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
// ����ż��λ������ĺ�벿�֡�

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
