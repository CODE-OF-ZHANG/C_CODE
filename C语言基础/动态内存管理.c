#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int var = 20;  // 在栈空间上开辟4个字节
//	char arr[10] = { 0 };  // 在栈空间上开辟10个字节的连续空间
//	return 0;
//}

//int main()
//{
//	// 申请20个字节的空间
//	int* p = (int*)malloc(20);
//	if (p == NULL)  // 判断是否为空指针
//	{
//		perror("malloc");
//		return 1;
//	}
//	// 不为空指针就可以使用
//	for (int i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	// 内存的释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));  // 申请5个整形大小的空间
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(5, sizeof(int));  // 申请5个整形大小的空间
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d ", *p);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));  // 申请空间
//	if (p != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			*(p + i) = i + 1;
//		}
//	}
//	// 调整空间大小, 调整为40个字节空间大小
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//		for (int i = 5; i < 10; i++)
//		{
//			*(p + i) = i + 1;
//		}
//		// 打印
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	else  // 调整失败
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(INT_MAX);
//	*p = 20;  //如果p的值是NULL，就会有问题
//	free(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i <= 10; i++)
//		{
//			*(p + i) = i + 1;  //当i是10的时候越界访问
//		}
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*p = i + 1;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	// ...
//	free(p);
//	free(p);  // 重复释放
//}
//int main()
//{
//	test();
//	return 0;
//}


//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	while (1);
//	return 0;
//}



//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}



//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}

//struct S
//{
//	int i;
//	int arr[0];  // 柔性数组成员
//	//有些编译器会报错无法编译可以改成：int arr[];
//};

//struct S
//{
//	int n;//4个字节
//	int arr[];//柔性数组
//};
//int main()
//{
//	printf("%zd\n", sizeof(struct S));
//	return 0;
//}

//struct S
//{
//	int n;//4个字节
//	int arr[];//柔性数组
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// 释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//	ps->arr = (int*)malloc(5 * sizeof(int));
//	if (ps->arr == NULL)
//		return 1;
//	ps->n = 100;
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	// 调整空间大小
//	int* ptr = (int*)realloc(ps->arr, 10 * sizeof(int));
//	if (ptr == NULL)
//		return 1;
//	ps->arr = ptr;
//	// 使用
//	//...
//
//	// 释放
//	free(ps->arr);
//	free(ps);
//	return 0;
//}