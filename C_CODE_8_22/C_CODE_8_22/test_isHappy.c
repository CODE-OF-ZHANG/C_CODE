#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
// ��дһ���㷨���ж�һ���� n �ǲ��ǿ�������
// ���������� ����Ϊ��
// ����һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���͡�
// Ȼ���ظ��������ֱ���������Ϊ 1��Ҳ������ ����ѭ�� ��ʼ�ձ䲻�� 1��
// ���������� ���Ϊ 1����ô��������ǿ�������
// ��� n �� ������ �ͷ��� true �����ǣ��򷵻� false ��

int bitsum(int n)
{
	int sum = 0;
	while (n)
	{
		int tmp = n % 10;
		sum += tmp * tmp;
		n /= 10;
	}
	return sum;
}

bool isHappy(int n)
{
	int slow = n, fast = bitsum(n);
	while (slow != fast)
	{
		slow = bitsum(slow);
		fast = bitsum(bitsum(fast));
	}
	return slow == 1;
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (isHappy(n))
//		printf("true\n");
//	else
//		printf("false\n");
//	return 0;
//}
