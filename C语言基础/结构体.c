#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//	char name[20]; // 姓名
//	int age;  // 年龄
//	char set[5];  // 性别
//	char id[20];  // 学号
//};  // 分号不能丢

//int main()
//{
//	struct Stu s = { "张三", 19, "男", "202201170248" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.set);
//	printf("%s\n", s.id);
//	return 0;
//}

//int main()
//{
//	struct Stu s = { .age = 19, .id = "202201170248", .name = "张三", .set = "男" };
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", s.set);
//	printf("%s\n", s.id);
//	return 0;
//}

//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], *p;

//struct node
//{
//	int data;
//	struct node next;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//typedef struct
//{
//	int data;
//	struct Node* next;
//}Node;

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%zd\n", sizeof(s));
//	return 0;
//}

//struct S1
//{
//	char c1;
//	char c2;
//	int i;
//};

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	// struct S1 s1 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%zd\n", sizeof(s4));
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//int main()
//{
//	struct S1 s1;
//	printf("%zd\n", sizeof(s1));
//	return 0;
//}

//struct S
//{
//	int arr[1000];
//	int num;
//	double d;
//};
//void print1(struct S s)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", s.num);
//	printf("%lf\n", s.d);
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 100,3.14 };
//	print1(s);
//	return 0;
//}

//struct S
//{
//	int arr[1000];
//	int num;
//	double d;
//};
//void print2(const struct S* ps)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", ps->num);
//	printf("%lf\n", ps->d);
//}
//int main()
//{
//	struct S s = { {1,2,3,4,5}, 100,3.14 };
//	print2(&s);
//	return 0;
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	// scanf("%d", &s._b);  // 这是错误的
//
//	// 正确的示范
//	int b = 0;
//	scanf("%d", &b);
//	s._b = b;
//	return 0;
//}

