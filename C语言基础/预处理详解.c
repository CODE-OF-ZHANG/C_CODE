#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%d\n", __LINE__);
//	// printf("%d\n", __STDC__);
//	return 0;
//}



//#define MAX 100
//#define STR "hello world"
//int main()
//{
//	int a = MAX;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	return 0;
//}



//#define MAX 100
//#define MAX1 100;
//int main()
//{
//	int a = MAX;
//	int b = MAX1;
//	printf("%d\n", MAX);
//	// printf("%d\n", MAX1);
//	return 0;
//}


//#define SQURE(x) x * x
//int main()
//{
//	int a = 12;
//	int b = SQURE(a);
//	printf("%d\n", b);
//	return 0;
//}


//#define SQURE(x) x * x
//int main()
//{
//	int a = 12;
//	int b = SQURE(a + 1);
//	printf("%d\n", b);
//	return 0;
//}


//#define SQURE(x) x * x
//int main()
//{
//	int a = 5;
//	int b = SQURE(a + 1);
//	printf("%d\n", b);
//	return 0;
//}



//#define SQURE(x) x * x
//int main()
//{
//	int a = 5;
//	int b = SQURE((a + 1));
//	printf("%d\n", b);
//	return 0;
//}

//#define MAX(x, y) ((x) > (y) ? (x) : (y))
//int Max(int x, int y)
//{
//	int ret = x > y ? x : y;
//	return ret;
//}
//int main()
//{
//	int m1 = MAX(4, 6);
//	int m2 = Max(4, 6);
//	printf("m1 = %d\n", m1);
//	printf("m2 = %d\n", m2);
//	return 0;
//}


//#define Malloc(n, type) (type*)malloc(n*sizeof(type))
//int main()
//{
//	// int* p = (int*)malloc(5 * sizeof(int));
//	int* prt = Malloc(5, int);
//	return 0;
//}



//int main()
//{
//	printf("hello" "world\n");
//	printf("helloworld\n");
//	return 0;
//}



//int main()
//{
//	int a = 1;
//	printf("the value of a is %d\n", a);
//	int b = 20;
//	printf("the value of b is %d\n", b);
//	float f = 5.6f;
//	printf("the value of f is %f\n", f);
//	return 0;
//}


//#define Print(n, format) printf("the value of " #n " is " format "\n", n)
//int main()
//{
//	int a = 1;
//	Print(a, "%d");
//	int b = 20;
//	Print(b, "%d");
//	float f = 5.6f;
//	Print(f, "%f");
//	return 0;
//}



//// 求整数较大值
//int int_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//// 求浮点数较大值
//float float_max(float a, float b)
//{
//	return a > b ? a : b;
//}


//// \为续航符
//#define GENERIC_MAX(type) \
//type type##_max(type x, type y)\
//{\
//return (x>y?x:y);\
//}
//// 使用宏定义不同的函数
//GENERIC_MAX(int)
//GENERIC_MAX(float)
//int main()
//{
//	int m1 = int_max(5, 6);
//	printf("%d\n", m1);
//	float m2 = float_max(5.6f, 3.4f);
//	printf("%f\n", m2);
//	return 0;
//}



//#define __DEBUG__
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//#ifdef DEBUG
//		printf("%d ", arr[i]);  //为了观察数组是否赋值成功。
//#endif // DEBUG
//	}
//	return 0;
//}



//int main()
//{
//#if 0
//	printf("hello world");
//#endif
//	return 0;
//}


//#define M 1
//int main()
//{
//#if M == 0
//	printf("hehe\n");
//#elif M == 1
//	printf("haha\n");
//#elif M == 2
//	printf("heihei\n");
//#endif
//	return 0;
//}


//int main()
//{
//#if defined(MAX)
//	printf("NO");
//#endif
//
//#if !defined(MAX)
//	printf("YES");
//#endif
//	return 0;
//}