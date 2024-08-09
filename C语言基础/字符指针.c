#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';
//	return 0;
//}

//int main()
//{
//	const char* pc = "hello world";
//	printf("%s\n", pc);//这里是把一个字符串放到pc指针变量里了吗？
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char* str3 = "hello world";
//	const char* str4 = "hello world";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");  // 序号1
//	else
//		printf("str1 and str2 are not same\n");  // 序号2
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");  // 序号3
//	else
//		printf("str3 and str4 are not same\n");  // 序号4
//	return 0;
//}