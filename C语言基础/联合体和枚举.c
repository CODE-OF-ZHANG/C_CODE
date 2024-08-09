#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//union Un
//{
//	char c1;
//	int i;
//};
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c1));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//union Un
//{
//	char c1;
//	int i;
//};
//
//int main()
//{
//	union Un u = { 0 };
//	u.i = 0x11223344;
//	u.c1 = 0x55;
//	printf("%x\n", u.i);
//	return 0;
//}

//union Un
//{
//	char c1[5];
//	int i;
//};
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));
//	return 0;
//}


//struct gift_list
//{
//	int stock_number;  // 库存量
//	double price;  // 价格
//	int item_type;  // 商品类型
//	union
//	{
//		struct  
//		{
//			char title[20];  // 书名
//			char author[20];  // 作者
//			int num_pages;  // 页数
//		}book;
//		struct
//		{
//			char desgin[30];  // 设计
//		}mug;
//		struct
//		{
//			char desgin[30];  // 设计
//			int colors;  // 颜色
//			int sizes;  // 尺寸
//		}shirt;
//	}item;
//};

//struct S
//{
//	char c;
//	int i;
//};
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	union Un u = { 0 };
//	return 0;
//}

//union Un
//{
//	char c[5];
//	int i;
//};
//
//int main()
//{
//	union Un u = { 0 };
//	printf("%zd\n", sizeof(u));
//	return 0;
//}

//struct gift_list
//{
//	// 公共属性
//	int stock_number;  // 库存量
//	double price;  // 价格
//	int item_type;  // 商品类型
//	// 特殊属性
//	char title[20];  // 书名
//	char author[20];  // 作者
//	int num_pages;  // 页数
//
//	char desgin[30];  // 设计
//	int colors;  // 颜色
//	int sizes;  // 尺寸
//};

//int check_sys()
//{
//	union Un
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
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

//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//enum Sex  // 性别
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color // 三原色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = RED;
//	return 0;
//}

//enum Color // 三原色
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

//enum Color // 三原色
//{
//	RED,
//	GREEN = 5,
//	BLUE
//};

//int main()
//{
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	return 0;
//}

//enum Color // 三原色
//{
//	RED,// 0
//	GREEN,// 1
//	BLUE// 2
//};
//
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int mian()
//{
//	int input = 0;
//	printf("请选择:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case ADD:  // 加法
//		break;
//	case SUB:  // 减法
//		break;
//	case MUL:  // 乘法
//		break;
//	case DIV:  // 除法
//		break;
//	case EXIT:  // 退出
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//enum Color // 三原色
//{
//	RED,// 0
//	GREEN,// 1
//	BLUE// 2
//};
//
//int main()
//{
//	// enum Color color = RED; // TRUE 
//	enum Color color = 0;
//	return 0;
//}