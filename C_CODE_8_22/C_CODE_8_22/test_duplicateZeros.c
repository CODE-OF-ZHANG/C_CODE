#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ����һ�����ȹ̶����������� arr ��
// ���㽫�������г��ֵ�ÿ���㶼��дһ�飬���������Ԫ������ƽ�ơ�

void duplicateZeros(int* arr, int arrSize)
{
	int cur = 0, dest = -1;
	// �ҵ����һ��Ҫ��д����
	while (cur < arrSize)
	{
		if (arr[cur] != 0) dest++;
		else dest += 2;
		if (dest >= arrSize - 1) break;
		cur++;
	}
	// ����߽����
	if (dest == arrSize)
	{
		arr[arrSize - 1] = 0;
		cur--, dest -= 2;
	}
	// �Ӻ���ǰ����˫ָ��
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
