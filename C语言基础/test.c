#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;  // Ǯ
//	int total = 0;  // ��ˮ
//	int empty = 0;  // ��ƿ��
//	scanf("%d", &money);
//	// Ǯ == ��ˮ������ == ��ƿ�ӵ�����
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d", total);
//	return 0;
//}
//
//int main()
//{
//	int x = 12;
//	int y = 5;
//	printf("%d\n", x);
//	printf("%d\n", y);
//	return 0;
//}
// 12
// 00000000000000000000000000001100  Դ��
// 01111111111111111111111111110011  ����
// 01111111111111111111111111110100  ����



// 5
// 00000000000000000000000000000101  Դ��
// 01111111111111111111111111111010  ����
// 01111111111111111111111111111011  ����

// 01111111111111111111111111110100
// 01111111111111111111111111111011
// 01111111111111111111111111110000  ����
// 

//#include<stdio.h>
//
//int count_one_of_bit(unsigned int m)
//{
//	int count = 0;
//	while (m) {
//		if (m % 2 == 1)
//			count++;
//		m = m / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_of_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int count_one_of_bit(int m) {
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (m & (m << i))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_of_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int count_one_of_bit(int m)
//{
//	int count = 0;
//	while (m) {
//		count++;
//		m = m & (m - 1);
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_of_bit(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int n = 13;
//	n = n | (1 << 4);
//	printf("%d\n", n);
//	n = n & ~(1 << 4);
//	printf("%d\n", n);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int c = 5;
//	int a = c + --c;
//	printf("%d\n", a);
//	return 0;
//}