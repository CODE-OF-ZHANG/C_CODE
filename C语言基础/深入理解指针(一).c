#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;  // 取出a的地址并存在指针变量pa中
//	*pa = 0;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	// 指针变量的大小取决于地址的大小
//	// 32位平台下地址是32个bit位（即4个字节）
//	// 64位平台下地址是64个bit位（即8个字节）
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int n = 0x0000004B0D2FF984;
//	char* pi = &n;
//	*pi = 0;
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pa= (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* pa = &a;
//	void* pc = &a;
//	*pa = 10;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	n = 20;  //n可以被修改
//	const int m = 10;
//	m = 20;  //m不可以被修改
//	return 0;
//}

//int main()
//{
//	const m = 0;
//	int* p = &m;
//	*p = 20;
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;
//	p = &m;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20;
//	p = &m;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 20;
//	const int* const p = &n;
//	*p = 20;
//	p = &m;
//	return 0;
//}
void fun(int x);
int main20()
{
	fun(7);
	printf("\n");
	return 0;
}
void fun(int x)
{
	if (x / 2 > 1)
		fun(x / 2);
	printf("%5d", x);
}