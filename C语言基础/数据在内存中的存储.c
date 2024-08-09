#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int check_sys()
//{
//	int n = 1;
//	return *((char*)&n);
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	// 00000000000000000000000010000000
//	// 10000000
//	// 11111111111111111111111110000000
//
//	char b = -128;
//	printf("a = %u, b = %u\n", a, b);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%zd\n", strlen(a));
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x %x", ptr1[-1], *ptr2);
//	return 0;
//}
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}