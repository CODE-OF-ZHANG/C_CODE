#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*****************************\n");
//		printf("    1��add        2��sub     \n");
//		printf("    3��mul        4��div     \n");
//		printf("    0��exit                  \n");
//		printf("*****************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int (*p[5])(int x, int y) = { 0, add, sub, mul, div };  //ת�Ʊ�
//	do
//	{
//		printf("*****************************\n");
//		printf("    1��add        2��sub     \n");
//		printf("    3��mul        4��div     \n");
//		printf("    0��exit                  \n");
//		printf("*****************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("������������������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}