#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d\n", 153);
//	printf("%d\n", 0153);
//	printf("%d\n", 0x153);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	// a是整型，即a占4个字节(32bite)位
//	// 00000000000000000000000000001010 -> a的原码
//  // 11111111111111111111111111111111
//	// 00000000000000000000000000001010 -> a的反码
//	// 00000000000000000000000000001010 -> a的补码
//	int b = -10;
//	// 10000000000000000000000000001010 -> b的原码
//	// 11111111111111111111111111110101 -> b的反码
//	// 11111111111111111111111111110110 -> b的补码
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("b = %d\n", b);
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = -7;
//	int c = a ^ b;
//	// 00000000000000000000000000001010 -> a的原、反、补码
//	// 11111111111111111111111111111001 -> b的补码
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d b = %d\n", a, b);
//	a = a + b;// a = 8, b = 5
//	b = a - b;// a = 8, b = 3
//	a = a - b;// a = 5, b = 3
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d b = %d\n", a, b);
//	return 0;
//}

//int count_one_of_bite(unsigned int n)
//{
//	int count = 0; // 计数
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_of_bite(n);
//	printf("二进制中一的个数：%d\n", ret);
//	return 0;
//}

//int count_one_of_bite(unsigned int n)
//{
//	int count = 0; // 计数
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = count_one_of_bite(n);
//	printf("二进制中一的个数：%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

////代码1：变量的定义
//struct Point
//{
//     int x;
//     int y;
//}p1;               //声明类型的同时定义变量p1
//struct Point p2;    //定义结构体变量p2
//
////代码2:初始化。
//struct Point p3 = { 10, 20 };
//
//struct Stu        //类型声明
//{
//     char name[15];//名字
//     int age;     //年龄
//};
//
//struct Stu s1 = { "zhangsan", 20 };//初始化
//struct Stu s2 = { .age = 20, .name = "lisi" };//指定顺序初始化
//
////代码3
//struct Node
//{
//     int data;
//     struct Point p;
//     struct Node* next;
//}n1 = { 10, {4,5}, NULL };            //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}p = { 1,2 };
//int main()
//{
//	printf("x: %d y: %d\n", p.x, p.y);
//	return 0;
//}

//#include <stdio.h>
//struct Point
//{
//	int x;
//	int y;
//};
//int main()
//{
//	struct Point p = { 3, 4 };
//	struct Point* ptr = &p;
//	ptr->x = 10;
//	ptr->y = 20;
//	printf("x = %d y = %d\n", ptr->x, ptr->y);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct Stu
//{
//	char name[15];//名字
//	int age; //年龄
//};
//void print_stu(struct Stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//void set_stu(struct Stu* ps)
//{
//	strcpy(ps->name, "李四");
//	ps->age = 28;
//}
//int main()
//{
//	struct Stu s = { "张三", 20 };
//	print_stu(s);
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}

//int main()
//{
//	char a = 5;
//	char b = 125;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

