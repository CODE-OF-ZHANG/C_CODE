#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// ��һ�����־��󣬾����ÿ�д������ǵ����ģ�
// ������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

void find_k(int arr2[3][3], int k, int x, int y)
{
	while (arr2[x][y] != k && x >= 0 && y >= 0)
	{
		if (k < arr2[x][y])//�����Ͻ�ֵ����kʱ�ų�k���ڵ�һ�з�֮�ų�������
		{
			y--;
		}
		else
		{
			x++;
		}

	}
	if (arr2[x][y] == k)
		printf("�ҵ��ˣ��±�Ϊ%d %d\n ", x, y);
	else
		printf("�Ҳ���\n");
}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//��3*3����Ϊ��
//	int k = 0;//Ҫ���ҵ�ֵ
//	int x = 0;
//	int y = 2;//�������������±�
//	scanf_s("%d", &k);
//	find_k(arr, k, x, y);
//	return 0;
//}
