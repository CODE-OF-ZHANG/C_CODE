#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void print_multiplication_table(num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %d\t", j, i, i * j);
		}
		printf("\n");
	}
}

int main4()
{
	int num = 0;
	printf("������һ�����֣�");
	scanf("%d", &num);

	printf("%d * %d �ھ���\n", num, num);
	print_multiplication_table(num);
	return 0;
}