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
//	int stock_number;  // �����
//	double price;  // �۸�
//	int item_type;  // ��Ʒ����
//	union
//	{
//		struct  
//		{
//			char title[20];  // ����
//			char author[20];  // ����
//			int num_pages;  // ҳ��
//		}book;
//		struct
//		{
//			char desgin[30];  // ���
//		}mug;
//		struct
//		{
//			char desgin[30];  // ���
//			int colors;  // ��ɫ
//			int sizes;  // �ߴ�
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
//	// ��������
//	int stock_number;  // �����
//	double price;  // �۸�
//	int item_type;  // ��Ʒ����
//	// ��������
//	char title[20];  // ����
//	char author[20];  // ����
//	int num_pages;  // ҳ��
//
//	char desgin[30];  // ���
//	int colors;  // ��ɫ
//	int sizes;  // �ߴ�
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
//		printf("С��\n");
//	else
//		printf("���\n");
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
//enum Sex  // �Ա�
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//enum Color // ��ԭɫ
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

//enum Color // ��ԭɫ
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

//enum Color // ��ԭɫ
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

//enum Color // ��ԭɫ
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
//	printf("��ѡ��:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case ADD:  // �ӷ�
//		break;
//	case SUB:  // ����
//		break;
//	case MUL:  // �˷�
//		break;
//	case DIV:  // ����
//		break;
//	case EXIT:  // �˳�
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//enum Color // ��ԭɫ
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