#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
// дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

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
		printf("�жϽ������ͬ\n");
	}
	else
	{
		printf("�жϽ��������ͬ\n");
	}
}

//int main()
//{
//	int n = 0;
//	char arr1[] = "ABCD";
//	char arr2[] = "CDAB";
//	printf("����ǰ��%s\n", arr1);
//	printf("�ж��ַ�����%s\n", arr2);
//	int len = strlen(arr1);
//	printf("���������ַ���");
//	scanf("%d", &n);
//	left_revolve(arr1, n, len);
//	printf("������%s\n", arr1);
//	judge(arr1, arr2);
//	return 0;
//}
