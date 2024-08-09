#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//// 指针 +- 整数
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]); // 计算元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));  // 指针 +- 整数
//	}
//	return 0;
//}


//my_strlen(char *s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组之间的元素个数
//	int i = 0;
//	while (p < arr + sz)  // 指针的大小比较
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;  // 局部变量未初始化，默认随机值
//	*p = 30;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		// 当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//int* test()
//{
//	int n = 100;
//	return &n;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p1 = &num;
//	int* p2 = NULL;
//	*p1 = 20;
//	// *p2 = 20;  // err
//	printf("%d\n", *p1);
//	// printf("%d\n", *p2);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,67,7,8,9,10 };
//	int* p = &arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;
//	}
//	//此时p已经越界了，可以把p置为NULL
//	p = NULL;
//	//下次使⽤的时候，判断p不为NULL的时候再使⽤
//	//...
//	p = &arr[0];//重新让p获得地址
//	if (p != NULL) //判断
//	{
//		//...
//	}
//	return 0;
//}

#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：%d %d\n", a, b);
//	Swap1(a, b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

//void Swap2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：%d %d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("arr       = %p\n", arr);
//	printf("&arr      = %p\n", &arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("&arr[0]      = %p\n", &arr[0]);
//	printf("&arr[0] + 1  = %p\n ", &arr[0]);
//	printf("arr         = %p\n", arr);
//	printf("arr + 1      = %p\n", arr + 1);
//	printf("&arr         = %p\n", &arr);
//	printf("&arr + 1     = %p\n", &arr + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 判断数组元素个数
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)  // 输入
//	{
//		scanf("%d", p + i);  // 写法一
//		// scanf("%d", arr + i);
//	}
//	for (i = 0; i < sz; i++)  // 输出
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);  // 计算数组中的元素个数
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}

//void test(int arr[])  // 参数写成数组形式，本质上还是指针
//{
//	printf("%d\n", sizeof(arr));
//}

//void test(int* arr)  // 参数写成指针形式
//{
//	printf("%d\n", sizeof(arr));  // 计算⼀个指针变量的⼤⼩
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}