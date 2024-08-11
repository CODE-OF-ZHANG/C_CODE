#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
// ʵ��һ������is_prime���ж�һ�����ǲ���������
// ��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

_Bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int  i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
